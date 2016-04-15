#import	<Social/Social.h>
#import <UIKit/UIKit.h>

@interface	SNSManager : NSObject<UIActionSheetDelegate>

@property (nonatomic) NSInteger m_Index;
@property (nonatomic) NSInteger m_AccountsMax;

// 唯一のオブジェクトを取得する.
+(SNSManager*)sharedInstance;

// 初期化. 必要があれば.
-(void)Initialize;

-(void)OAuthRequest;

// テキストのみでツイートする.
-(void)PostTweet:(NSString*)_text _lang:(NSString*)_language;

// イメージ付きでツイートする.
-(void)PostTweetWithImage:(NSString*)_text pngImage:(NSData*)_pngImage _lang:(NSString*)_language;

// Lineに投稿する.
-(void)PostLine:(NSString*)_text;

// Lineに投稿する(画像付き).
-(void)PostLineWithImage:(NSString*)_text pngImage:(NSData*)_pngImage;

// ツイートできるかどうか.
-(BOOL)IsAccessTwitter;

// アラートビュー.
// @param _msg : メッセージ.
// @param _title : タイトル.
-(void)AlertView:(NSString*)_msg title:(NSString*)_title;

@end
