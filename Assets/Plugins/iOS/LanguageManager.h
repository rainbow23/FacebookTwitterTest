
#pragma once

#import <Foundation/Foundation.h>

/**
 * [エラー]
 */
#define kERROR 0
/**
 * [リストア完了]
 */
#define kRESTORE_COMPLETE 1
/**
 * [購入したアイテムがありません]
 */
#define kNOT_ITEMS 2
/**
 * [アイテムIDが不正です]
 */
#define kINVALID_ITEM_ID 3
/**
 * [アプリ内課金が制限されています]
 */
#define kPURCHASE_LOCK 4
/**
 * [初期化が正しく行われていません]
 */
#define kINITIALIZING_FAILED 5
/**
 * [問題のリストアが完了しました]
 */
#define kRESTORING_OF_PUZZLES 6
/**
 * [投稿成功]
 */
#define kPOST_SUCCESS_TITLE 7
/**
 * [Facebookの投稿に成功しました]
 */
#define kFB_POST_SUCCESS 8
/**
 * [投稿失敗]
 */
#define kPOST_FAILED_TITLE 9
/**
 * [Facebookの投稿に失敗しました]
 */
#define kFB_POST_FAILED 10
/**
 * [ツイートが完了しました]
 */
#define kTWEET_COMPLETE 11
/**
 * [FBログインエラー]
 */
#define kFB_LOGIN_ERROR 12
/**
 * [ログインに失敗しました]
 */
#define kLOGIN_FAILED 13
/**
 * [キャンセルしました]
 */
#define kCANCELLED 14
/**
 * [使用するアカウントを選択してください]
 */
#define kSELECT_TWETTER_ACOUNT 15
/**
 * [設定からTwitterへのアクセスを許可して下さい]
 */
#define kNEED_ACCESS_TWETTER 16
/**
 * [現在圏外の状態であるため、通信が行えません。
 * 電波状況の良い場所に移動していただき、再度お試しください。]
 */
#define kOFFLINE_ERROR 17
/**
 * [データ引き継ぎコードをお持ちの方は下記に入力し送信を押してください]
 */
#define kPLEASE_ENTER_YOUR_CODE 18
/**
 * [データを引き継ぎました]
 */
#define kDATA_HAS_BEEN_TRANSFER 19
/**
 * [アプリを最新版にアップデート
 * してからお試しください]
 */
#define kPLEASE_UPDATE_Q 20
/**
 * [お客様のデータ引き継ぎIDは]
 */
#define kYOUR_ID_IS 21
/**
 * [絶対になくさないようにメモを取ってください！！]
 */
#define kPELASE_MEMO 22
/**
 * [無効な引き継ぎコードです]
 */
#define kINVALID_TRANSFER_CODE 23
/**
 * [大文字小文字を正しく入力する必要があります]
 */
#define kCASE_SENSITIVE 24
/**
 * [リクエストデータが不正です。]
 */
#define kINVALID_REQUEST 25
/**
 * [認証に失敗しました。]
 */
#define kAUTH_FAILED 26
/**
 * [サーバエラー
 * しばらく時間をおいてお試し下さい。]
 */
#define kSERVER_ERROR 27
/**
 * [不明なエラー]
 */
#define kUNKNOWN_ERROR 28
/**
 * [一定時間後にお試しください]
 */
#define kTRY_AGAIN_LATER 29
/**
 * [閉じる]
 */
#define kCLOSE 30
/**
 * [タップして入力]
 */
#define kTAP_TO_ENTER 31
/**
 * [ID発行]
 */
#define kISSUE_ID 32
/**
 * [キャンセル]
 */
#define kCANCEL 33
/**
 * [はい]
 */
#define kYES 34
/**
 * [いいえ]
 */
#define kNO 35
/**
 * [＊キャンセルボタンを押すと、このIDの発行を取りやめます。]
 */
#define kWILL_BE_CANCEL_ISSUE_ID 36
/**
 * [引き継ぎが完了しました。
 * 引き続き新しい端末でお楽しみ下さい。]
 */
#define kALL_FINISH_DATA_TRANSFER 37
/**
 * [ID入力]
 */
#define kENTER_ID 38
/**
 * [引き継ぎエラー]
 */
#define kTRANSFER_ERROR 39
/**
 * [通信エラーにより引き継ぎが正常に完了していません。
 *	下の「問い合わせ」ボタンで運営までご報告ください。
 * 	※問い合わせボタンを押すとメールが起動します。
 * 	※文面に最初から文字列が記入されています。
 *	内容は編集せずにそのまま送信してください。]
 */
#define kTRANSFER_ERROR_EXPLAIN 40
/**
 * [問い合わせ]
 */
#define kCONTACT 41
/**
 * [編集せずにそのまま送信して下さい]
 */
#define kPLEASE_SEND_MAIL_AS_IS 42

/**
 * 日本語.
 */
#define kJP @"ja_JP"
/**
 * 英語.
 */
#define kEN @"en_US"
/**
 * フランス語.
 */
#define kFR @"fr_FR"
/**
 * イタリア語.
 */
#define kIT @"it_IT"
/**
 * ドイツ語.
 */
#define kDE @"de_DE"
/**
 * スペイン語.
 */
#define kES @"es_ES"
/**
 * ポルトガル語.
 */
#define kPR @"pt_BR"
/**
 * 中国語(簡体字).
 */
#define kZH @"zh_CN"
/**
 * 中国語(繁体字).
 */
#define kTW @"zh_TW"
/**
 * 韓国語.
 */
#define kKR @"ko_KR"

/**
 * システムで表示する言語を管理するクラス.
 */
@interface LanguageManager : NSObject {}

@property (retain) NSString* m_currentLanguage;
@property (retain) NSArray* m_languageIndex;
@property (retain) NSMutableArray* m_dictionary;

/**
 * LanguageManagerのインスタンス.
 */
+(LanguageManager*)sharedInstance;

/**
 * 言語ごとのテキストデータを登録する.
 *
 * @param data 言語順に整列したテキストデータの配列.
 */
-(void)registerData:(NSArray*)data;

/**
　* テキストを取得する.
　*
　* @param index テキストの種類(インデックス).
　* @return テキストデータ.
　*/
-(NSString*)getTextData:(int)index;

/**
 * 言語情報を初期化する.
 */
-(void)initLanguage;

/**
 * NSStringの中に、s1が含まれているか判定する.
 *
 * @param s0 検索対象の文字列.
 * @param s1 検索する文字列.
 * @return s1が存在すればtrue.
 */
-(BOOL)indexOfNSString:s0 keyword: s1;

@end

static LanguageManager* languageManagerInstance = nil;