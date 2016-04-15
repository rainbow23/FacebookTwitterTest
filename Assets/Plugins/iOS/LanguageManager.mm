#import "LanguageManager.h"
#import "string.h"

@implementation LanguageManager {}

@synthesize m_currentLanguage;
@synthesize m_languageIndex;
@synthesize m_dictionary;

/**
 * LanguageManagerのインスタンス.
 */
+(LanguageManager*)sharedInstance {
    @synchronized (self) {
        if (!languageManagerInstance) {
            languageManagerInstance = [LanguageManager new];
        }
    }

    return languageManagerInstance;
}

-(instancetype)init {
    self = [super init];
    if( self )
    {
        self.m_currentLanguage = kJP;
        self.m_languageIndex = [NSArray arrayWithObjects:
            kJP, kEN, kFR, kIT, kDE, kES, kPR, kZH, kTW, kKR, nil
        ];
        self.m_dictionary = [NSMutableArray array];

        [self initLanguage];
        [self registerData: [NSArray arrayWithObjects:
            @"ERROR", @"ERROR", @"ERROR", @"ERROR", @"ERROR", @"ERROR", @"ERROR", @"ERROR", @"ERROR", @"ERROR", nil
        ]];
    }

    return self;
}

/**
 * 言語ごとのテキストデータを登録する.
 */
-(void)registerData:(NSArray*)data {
    NSMutableDictionary* _hashData = [NSMutableDictionary dictionary];
    for (int i = 0; i < [data count]; i++) {
        [_hashData setObject:[data objectAtIndex: i] forKey: [self.m_languageIndex objectAtIndex: i]];
    }

    [self.m_dictionary addObject: _hashData];
}

/**
　* テキストを取得する.
　*/
-(NSString*)getTextData:(int)index {
    NSMutableDictionary* _data = [self.m_dictionary objectAtIndex: index];
    return [_data objectForKey: self.m_currentLanguage];
}

/**
 * 言語情報を初期化する.
 */
-(void)initLanguage {
    NSString* _preferredLanguage = [[NSLocale preferredLanguages] objectAtIndex: 0];
    NSString* _languageCode = [_preferredLanguage substringToIndex: 2];
    NSLog(@"[LanguageManager] Language = %@", _preferredLanguage);
    if ([_languageCode isEqualToString: @"ja"]) {
        NSLog(@"[LanguageManager] Detected language is {ja}");
        self.m_currentLanguage = kJP;
    } else if ([_languageCode isEqualToString: @"en"]) {
        NSLog(@"[LanguageManager] Detected language is {en}");
        self.m_currentLanguage = kEN;
    } else if ([_languageCode isEqualToString: @"fr"]) {
        NSLog(@"[LanguageManager] Detected language is {fr}");
        self.m_currentLanguage = kFR;
    } else if ([_languageCode isEqualToString: @"it"]) {
        NSLog(@"[LanguageManager] Detected language is {it}");
        self.m_currentLanguage = kIT;
    } else if ([_languageCode isEqualToString: @"de"]) {
        NSLog(@"[LanguageManager] Detected language is {de}");
        self.m_currentLanguage = kDE;
    } else if ([_languageCode isEqualToString: @"es"]) {
        NSLog(@"[LanguageManager] Detected language is {es}");
        self.m_currentLanguage = kES;
    } else if ([_languageCode isEqualToString: @"pt"]) {
        NSLog(@"[LanguageManager] Detected language is {pt}");
        self.m_currentLanguage = kPR;
    } else if ([_languageCode isEqualToString: @"zh"]) {
        /**
         * 中国系言語が、
         * zh-Hant 繁体字
         * zh-Hans 簡体字
         * zh-HK   香港
         * とあるので、
         * zh−Hansが設定されていれば簡体字を返し、それ以外は繁体字を返すようにする.
         * 文字列長のチェックをしているのは、zh-HKがzh-Hansなどより文字列長が短いため.
         */
        if ([_preferredLanguage length] >= 7) {
            _languageCode = [[[NSLocale preferredLanguages] objectAtIndex: 0] substringToIndex: 7];
        }
        
        if ([_languageCode isEqualToString: @"zh-Hans"]) {
            NSLog(@"[LanguageManager] Detected language is {tw}");
            self.m_currentLanguage = kTW;
        } else {
            NSLog(@"[LanguageManager] Detected language is {zh}");
            self.m_currentLanguage = kZH;
        }
    } else if ([_languageCode isEqualToString: @"ko"]) {
        NSLog(@"[LanguageManager] Detected language is {ko}");
        self.m_currentLanguage = kKR;
    } else {
        NSLog(@"[LanguageManager] Detected language is {other(en)}");
        self.m_currentLanguage = kEN;
    }

}

/**
 * NSStringの中に、s1が含まれているか判定する.
 */
-(BOOL)indexOfNSString:s0 keyword: s1 {
    return ([s0 rangeOfString: s1].location != NSNotFound);
}

/**
 * 現在デバイスに設定されている言語を取得.
 */
-(NSString*)getDeviceLanguage {
    return self.m_currentLanguage;
}

@end

extern "C"
{
    /**
     * Unityから文字列データを登録.
     */
    void _RegisterData(
    const char* jp, const char* en, const char* fr, const char* it, const char* de,
    const char* es, const char* pr, const char* zh, const char* tw, const char* kr) {
        [[LanguageManager sharedInstance] registerData:
            [NSArray arrayWithObjects:
                [NSString stringWithCString: jp encoding:NSUTF8StringEncoding],
                [NSString stringWithCString: en encoding:NSUTF8StringEncoding],
                [NSString stringWithCString: fr encoding:NSUTF8StringEncoding],
                [NSString stringWithCString: it encoding:NSUTF8StringEncoding],
                [NSString stringWithCString: de encoding:NSUTF8StringEncoding],
                [NSString stringWithCString: es encoding:NSUTF8StringEncoding],
                [NSString stringWithCString: pr encoding:NSUTF8StringEncoding],
                [NSString stringWithCString: zh encoding:NSUTF8StringEncoding],
                [NSString stringWithCString: tw encoding:NSUTF8StringEncoding],
                [NSString stringWithCString: kr encoding:NSUTF8StringEncoding],
                nil
            ]
        ];
    }

    /**
     * C#用に文字列を加工.
     */
    char* _MakeString(const char* str) {
        if (str == NULL) {
            return NULL;
        }

        char* res = (char*)malloc(strlen(str) + 1);
        strcpy(res, str);

        return res;
    }

    /**
    * 現在デバイスに設定されている言語を取得.
    */
    char* _GetDeviceLanguage() {
        return _MakeString([[LanguageManager sharedInstance].m_currentLanguage UTF8String]);
    }

    /**
　   * テキストを取得する.
　   */
    char* _GetTextData(int index) {
        return _MakeString([[[LanguageManager sharedInstance] getTextData: index] UTF8String]);
    }
}
