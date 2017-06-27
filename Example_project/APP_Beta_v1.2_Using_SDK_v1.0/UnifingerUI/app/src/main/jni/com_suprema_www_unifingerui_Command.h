/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_suprema_www_unifingerui_Command */

#ifndef _Included_com_suprema_www_unifingerui_Command
#define _Included_com_suprema_www_unifingerui_Command
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_suprema_www_unifingerui_Command
 * Method:    SetCommandClassName
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_suprema_www_unifingerui_Command_SetCommandClassName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_suprema_www_unifingerui_Command
 * Method:    SetWriteCallbackFunctionName
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_suprema_www_unifingerui_Command_SetWriteCallbackFunctionName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_suprema_www_unifingerui_Command
 * Method:    SetReadCallbackFunctionName
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_suprema_www_unifingerui_Command_SetReadCallbackFunctionName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_suprema_www_unifingerui_Command
 * Method:    UF_Enroll
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_suprema_www_unifingerui_Command_UF_1Enroll
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_suprema_www_unifingerui_Command
 * Method:    UF_Identify
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_suprema_www_unifingerui_Command_UF_1Identify
  (JNIEnv *, jobject);

/*
 * Class:     com_suprema_www_unifingerui_Command
 * Method:    UF_Verify
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_suprema_www_unifingerui_Command_UF_1Verify
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_suprema_www_unifingerui_Command
 * Method:    UF_ScanImage
 * Signature: (II)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_suprema_www_unifingerui_Command_UF_1ScanImage
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_suprema_www_unifingerui_Command
 * Method:    UF_SetDefaultPacketSIze
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_suprema_www_unifingerui_Command_UF_1SetDefaultPacketSIze
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_suprema_www_unifingerui_Command
 * Method:    UF_ReadImage
 * Signature: (II)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_suprema_www_unifingerui_Command_UF_1ReadImage
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif