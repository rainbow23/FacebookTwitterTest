
#import <Accounts/Accounts.h>
#import <Social/Social.h>
#import "SNSManager.h"
#import "LanguageManager.h"

#pragma clang diagnostic ignored "-Wunused-variable"


extern "C"
{
    extern UIViewController* UnityGetGLViewController();
}

static SNSManager*     sInstance = nil;

@implementation SNSManager

@synthesize m_Index;

__strong static ACAccountStore* sAccountStore = nil;
// __strong static NSArray*        sAccounts = nil;

// 唯一のインスタンスを取得する.
+(SNSManager*)sharedInstance {
    @synchronized(self) {
        if (!sInstance) {
            sInstance = [SNSManager new];
        }
    }
    return sInstance;
}

// 初期化.
-(void)Initialize
{
    sAccountStore = [[ACAccountStore alloc] init];
    self.m_Index = -1;
    
    NSLog(@"Initialize");
}

// アカウントリストにアクセスする.
-(void)OAuthRequest
{
    if (self.m_Index != -1) return;
    
    ACAccountType *accountType = [sAccountStore accountTypeWithAccountTypeIdentifier:ACAccountTypeIdentifierTwitter];
    // __weak typeof(self) _self =  self;
    
    // twitterアカウントにアクセスするのを許可する.
    [sAccountStore requestAccessToAccountsWithType:accountType options:nil completion:^(BOOL granted, NSError *error)
     {
         dispatch_async(dispatch_get_main_queue(), ^
                        {
                            if (granted) {
                                NSLog(@"granted twitter account");
                                NSArray* _twitterAccounts = [sAccountStore accountsWithAccountType:accountType]; // 追加
                                if ([_twitterAccounts count] > 0) {
                                    self.m_AccountsMax = [_twitterAccounts count];
                                    if ([_twitterAccounts count] == 1) {
                                        self.m_Index = 0;
                                        return;
                                    }
                                    // 複数アカウントの場合
                                    UIActionSheet* _sheet = [[UIActionSheet alloc] init];
                                    _sheet.delegate = self;
                                    //_sheet.title = @"使用するアカウントを選択してください。";
                                    _sheet.title = [[LanguageManager sharedInstance] getTextData: kSELECT_TWETTER_ACOUNT];
                                    
                                    // アカウントの数ぶんボタンを増やす
                                    for (NSInteger i=0; i<[_twitterAccounts count]; i++) {
                                        [_sheet addButtonWithTitle:[NSString stringWithFormat:@"%@", [[_twitterAccounts objectAtIndex:i] accountDescription]]];
                                    }
                                    //[_sheet addButtonWithTitle:@"キャンセル"];
                                    [_sheet addButtonWithTitle: [[LanguageManager sharedInstance] getTextData: kCANCELLED]];
                                    [_sheet setCancelButtonIndex:[_twitterAccounts count]];
                                    [_sheet showInView:UnityGetGLViewController().view];
                                }
                            }
                            else {
                                //[self AlertView:@"設定からTwitterへのアクセスを許可して下さい" title:@"権限エラー"];
                                [self AlertView:[[LanguageManager sharedInstance] getTextData: kNEED_ACCESS_TWETTER] title:[[LanguageManager sharedInstance] getTextData: kERROR]];
                                // NSLog(@"User denied to access twitter account.");
                            }
                        });
     }];
    
    NSLog(@"OAuthRequest");
}

// アクションシートのボタンが押された時に呼ばれるデリゲート例文
-(void)actionSheet:(UIActionSheet*)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (buttonIndex == self.m_AccountsMax) {
        self.m_Index = -1;
    }
    else {
        self.m_Index = buttonIndex;
    }
}

// テキストのみでツイートする.
-(void)PostTweet:(NSString*)_text _lang:(NSString*)_language;
{
    // エミュレータでも問題なく動く
    // postのクライアント表示はiOSになる。
    if (m_Index == -1) return;
    /*
     SLComposeViewController* _twitterPostVC = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeTwitter];
     [_twitterPostVC setInitialText:_text];
     
     // UIImage* _image = [[[UIImage alloc] initWithData:_pngImage] autorelease];
     // [_twitterPostVC addImage:_image];
     
     UIViewController* parent = UnityGetGLViewController();
     
     [parent presentViewController:_twitterPostVC animated:NO completion:nil];
     */
    ACAccountType *accountType = [sAccountStore accountTypeWithAccountTypeIdentifier:ACAccountTypeIdentifierTwitter];
    NSArray* twitterAccounts = [sAccountStore accountsWithAccountType:accountType]; // 追加
    ACAccount* _account = [twitterAccounts objectAtIndex:self.m_Index];
    
    NSURL *url = [NSURL URLWithString:@"https://api.twitter.com/1.1/statuses/update.json"];
    NSDictionary *parameters = @{@"status": _text};
    SLRequest* request = [SLRequest requestForServiceType:SLServiceTypeTwitter requestMethod:SLRequestMethodPOST URL:url parameters:parameters];
    
    [request setAccount:_account];
    [request performRequestWithHandler:^(NSData *responseData, NSHTTPURLResponse *urlResponse, NSError *error)
     {
         dispatch_async(dispatch_get_main_queue(), ^
                        {
                            NSUInteger statusCode = urlResponse.statusCode;
                            if (200 <= statusCode && statusCode < 300) {
                                NSDictionary *tweet = [NSJSONSerialization JSONObjectWithData:responseData options:0 error:nil];
#warning 後で使うかもなので未使用変数はこのまま
                                NSMutableString *text = [[NSMutableString alloc] initWithCapacity:200];
                                NSString *tweetUsername = [[tweet objectForKey:@"user"] objectForKey:@"screen_name"];
                                NSString *tweetText = [tweet objectForKey:@"text"];
                            }
                            else {
                                NSDictionary *twitterErrorRoot = [NSJSONSerialization JSONObjectWithData:responseData options:0 error:nil];
                                NSArray *twitterErrors = [twitterErrorRoot objectForKey:@"errors"];
                            }
                        });
     }];
    
    NSLog(@"!!!!!!!!!!!!!!!!!!!! %@", _language);
    /*
    if ([_language isEqualToString:@"_j"]) {
        [self AlertView:@"ツイートに成功しました" title:@"ツイート完了"];
    }
    else {
        [self AlertView:@"Tweet successful!" title:@"Tweet complete!"];
    }
    */
    [self AlertView:[[LanguageManager sharedInstance] getTextData: kTWEET_COMPLETE] title:[[LanguageManager sharedInstance] getTextData: kPOST_SUCCESS_TITLE]];
    // NSLog(@"PostTweet");
    // NSLog(@"text : %s", _text);
}

// 画像付きでツイートする.
-(void)PostTweetWithImage:(NSString*)_text pngImage:(NSData*)_pngImage _lang:(NSString*)_language;
{
    // エミュレータでも問題なく動く
    // postのクライアント表示はiOSになる。
    if (m_Index == -1) return;
    /*
     SLComposeViewController* _twitterPostVC = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeTwitter];
     [_twitterPostVC setInitialText:_text];
     
     UIImage* _image = [[[UIImage alloc] initWithData:_pngImage] autorelease];
     [_twitterPostVC addImage:_image];
     
     UIViewController* parent = UnityGetGLViewController();
     
     [parent presentViewController:_twitterPostVC animated:NO completion:nil];
     */
    ACAccountType *accountType = [sAccountStore accountTypeWithAccountTypeIdentifier:ACAccountTypeIdentifierTwitter];
    NSArray* twitterAccounts = [sAccountStore accountsWithAccountType:accountType]; // 追加
    ACAccount *account = [twitterAccounts objectAtIndex:self.m_Index];
    
    NSURL *url = [NSURL URLWithString:@"https://api.twitter.com/1.1/statuses/update_with_media.json"];
    // NSDictionary *parameters;//@{@"status": _text};
    SLRequest* request = [SLRequest requestForServiceType:SLServiceTypeTwitter requestMethod:SLRequestMethodPOST URL:url parameters:nil];
    
    [request addMultipartData:[_text dataUsingEncoding:NSUTF8StringEncoding] withName:@"status" type:@"multipart/form-data" filename:nil];
    [request addMultipartData:_pngImage withName:@"media[]" type:@"multipart/form-data" filename:nil];
    
    [request setAccount:account];
    [request performRequestWithHandler:^(NSData *responseData, NSHTTPURLResponse *urlResponse, NSError *error)
     {
         dispatch_async(dispatch_get_main_queue(), ^
                        {
                            NSUInteger statusCode = urlResponse.statusCode;
                            if (200 <= statusCode && statusCode < 300) {
                                NSDictionary *tweet = [NSJSONSerialization JSONObjectWithData:responseData options:0 error:nil];
                                NSMutableString *text = [[NSMutableString alloc] initWithCapacity:200];
                                NSString *tweetUsername = [[tweet objectForKey:@"user"] objectForKey:@"screen_name"];
                                NSString *tweetText = [tweet objectForKey:@"text"];
                                NSLog(@"TweetUseName : %@", tweetUsername);
                                NSLog(@"tweetText : %@", tweetUsername);
                            }
                            else {
                                NSDictionary *twitterErrorRoot = [NSJSONSerialization JSONObjectWithData:responseData options:0 error:nil];
                                NSArray *twitterErrors = [twitterErrorRoot objectForKey:@"errors"];
                            }
                        });
     }];
    
    NSLog(@"!!!!!!!!!!!!!!!!!!!! %@", _language);
//    /*
//    if ([_language isEqualToString:@"_j"]) {
//        [self AlertView:@"ツイートに成功しました" title:@"ツイート完了"];
//    }
//    else {
//        [self AlertView:@"Tweet successful!" title:@"Tweet complete!"];
//    }
//    */
//    [self AlertView:[[LanguageManager sharedInstance] getTextData: kTWEET_COMPLETE] title:[[LanguageManager sharedInstance] getTextData: kPOST_SUCCESS_TITLE]];
//    // NSLog(@"PostTweet2");
//    // NSLog(@"text : %s", _text);
}

// ラインに投稿する.
-(void)PostLine:(NSString*)_text
{
    NSString* _lineScheme = @"line://";
    
    BOOL _canOpen = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:_lineScheme]];
    if (_canOpen) {
        NSString* _encodeText = [_text stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
        
        NSString* _lineString = [NSString stringWithFormat:@"line://msg/text/%@", _encodeText];
        [[UIApplication sharedApplication] openURL:[NSURL URLWithString:_lineString]];
    }
    else {
        NSString* _url = @"https://itunes.apple.com/jp/app/line/id443904275?mt=8";
        
        [[UIApplication sharedApplication] openURL:[NSURL URLWithString:_url]];
    }
    
    // NSLog(@"PostLine");
    // NSLog(@"text : %s", _text);
}

// 画像付きでラインに投稿する.
-(void)PostLineWithImage:(NSString*)_text pngImage:(NSData*)_pngImage
{
    NSString* _lineScheme = @"line://";
    
    BOOL _canOpen = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:_lineScheme]];
    if (_canOpen) {
        UIImage* _image = [[UIImage alloc] initWithData:_pngImage];
        UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
        
        [pasteboard setData:UIImagePNGRepresentation(_image) forPasteboardType:@"public.png"];
        
        // NSString* _encodeText = [_text stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
        
        NSString* _lineString = [NSString stringWithFormat:@"line://msg/image/%@", pasteboard.name];
        [[UIApplication sharedApplication] openURL:[NSURL URLWithString:_lineString]];
    }
    else {
        NSString* _url = @"https://itunes.apple.com/jp/app/line/id443904275?mt=8";
        
        [[UIApplication sharedApplication] openURL:[NSURL URLWithString:_url]];
    }
    
    // NSLog(@"PostTweet2");
    // NSLog(@"text : %s", _text);
}

// ツイッターにアクセスできるかどうか.
-(BOOL)IsAccessTwitter {
    return (self.m_Index != -1);
}

// アラートビューの表示.
-(void)AlertView:(NSString*)_msg title:(NSString*)_title {
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:_title message:_msg delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK", nil];
    [alert show];
}

@end

// Native Interface(Unityから呼び出す部分).
extern "C"  // .mファイルだと必要ないけど念のため.
{
    // 初期化.
    void    _Initialize(void) {
        [[SNSManager sharedInstance] Initialize];
    }
    
    // 認証のみ.
    void    _OAuthRequest(void) {
        [[SNSManager sharedInstance] OAuthRequest];
    }
    
    void    _PostTweet(const char* _text, const char* _language) {
        NSString* _l = [[NSString alloc] initWithUTF8String:_language];
        NSString* _str = [[NSString alloc] initWithUTF8String:_text];
        [[SNSManager sharedInstance] PostTweet:_str _lang:_l];
    }
    
    void    _PostTweetWithImage(const char* _text, const char** _pngImage, int _dataLength, const char* _language) {
        NSString* _l = [[NSString alloc] initWithUTF8String:_language];
        
        NSString* _str = [[NSString alloc] initWithUTF8String:_text];
        NSData* _src = [NSData dataWithBytes:(const void *)_pngImage length:(sizeof(unsigned char)* _dataLength)];
        
        [[SNSManager sharedInstance] PostTweetWithImage:_str pngImage:_src _lang:_l];
    }
    
    void    _PostLine(const char* _text) {
        NSString* _str = [[NSString alloc] initWithUTF8String:_text];
        [[SNSManager sharedInstance] PostLine:_str];
    }
    
    void    _PostLineWithImage(const char* _text, const char** _pngImage, int _dataLength) {
        NSString* _str = [[NSString alloc] initWithUTF8String:_text];
        NSData* _src = [NSData dataWithBytes:(const void *)_pngImage length:(sizeof(unsigned char)* _dataLength)];
        
        [[SNSManager sharedInstance] PostLineWithImage:_str pngImage:_src];
    }
    
    bool    _isAccessTwitter(void) {
        return [[SNSManager sharedInstance] IsAccessTwitter];
    }
    
    void    _AlertView(const char* _title, const char* _msg) {
        NSString* _tmp1 = [[NSString alloc] initWithUTF8String:_title];
        NSString* _tmp2 = [[NSString alloc] initWithUTF8String:_msg];
        [[SNSManager sharedInstance] AlertView:_tmp2 title:_tmp1];
    }
}
