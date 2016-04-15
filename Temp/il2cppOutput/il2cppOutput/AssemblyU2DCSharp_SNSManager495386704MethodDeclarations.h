#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1569193387_0;

#include "codegen/il2cpp-codegen.h"

// System.Void SNSManager::_Initialize()
extern "C"  void SNSManager__Initialize_m1402742163_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::Initialize()
extern "C"  void SNSManager_Initialize_m1963153742_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::_OAuthRequest()
extern "C"  void SNSManager__OAuthRequest_m_1157624997_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::OAuthRequest()
extern "C"  void SNSManager_OAuthRequest_m526990422_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::_PostTweet(System.String,System.String)
extern "C"  void SNSManager__PostTweet_m_75480946_0 (Object_t * __this /* static, unused */, String_t* ____text, String_t* ____lang, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::PostTweet(System.String,System.String)
extern "C"  void SNSManager_PostTweet_m_1632309111_0 (Object_t * __this /* static, unused */, String_t* ____text, String_t* ____lang, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::_PostTweetWithImage(System.String,System.Byte[],System.Int32,System.String)
extern "C"  void SNSManager__PostTweetWithImage_m1019904629_0 (Object_t * __this /* static, unused */, String_t* ____text, ByteU5BU5D_t1569193387_0* ____pngimage, int32_t ____length, String_t* ____lang, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::PostTweet(System.String,System.Byte[],System.String)
extern "C"  void SNSManager_PostTweet_m452324748_0 (Object_t * __this /* static, unused */, String_t* ____text, ByteU5BU5D_t1569193387_0* ____pngBytes, String_t* ____lang, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::_PostLine(System.String)
extern "C"  void SNSManager__PostLine_m1210534443_0 (Object_t * __this /* static, unused */, String_t* ____text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::PostLine(System.String)
extern "C"  void SNSManager_PostLine_m320209808_0 (Object_t * __this /* static, unused */, String_t* ____text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::_PostLineWithImage(System.String,System.Byte[],System.Int32)
extern "C"  void SNSManager__PostLineWithImage_m_88120366_0 (Object_t * __this /* static, unused */, String_t* ____text, ByteU5BU5D_t1569193387_0* ____pngImage, int32_t ____length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::PostLine(System.String,System.String,System.Byte[])
extern "C"  void SNSManager_PostLine_m_1723489329_0 (Object_t * __this /* static, unused */, String_t* ____text, String_t* ____localPath, ByteU5BU5D_t1569193387_0* ____pngData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SNSManager::_isAccessTwitter()
extern "C"  bool SNSManager__isAccessTwitter_m1651171128_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SNSManager::IsAccessTwitter()
extern "C"  bool SNSManager_IsAccessTwitter_m1535461973_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SNSManager::_AlertView(System.String,System.String)
extern "C"  bool SNSManager__AlertView_m1576741610_0 (Object_t * __this /* static, unused */, String_t* ____title, String_t* ____msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SNSManager::AlertView(System.String,System.String)
extern "C"  void SNSManager_AlertView_m347078169_0 (Object_t * __this /* static, unused */, String_t* ____title, String_t* ____msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
