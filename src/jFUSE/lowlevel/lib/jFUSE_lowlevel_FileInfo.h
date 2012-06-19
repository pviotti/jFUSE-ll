/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jFUSE_lowlevel_FileInfo */

#ifndef _Included_jFUSE_lowlevel_FileInfo
#define _Included_jFUSE_lowlevel_FileInfo
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    setFlags
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jFUSE_lowlevel_FileInfo_setFlags
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    getFlags
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_jFUSE_lowlevel_FileInfo_getFlags
  (JNIEnv *, jobject);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    setWritePage
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jFUSE_lowlevel_FileInfo_setWritePage
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    getWritePage
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jFUSE_lowlevel_FileInfo_getWritePage
  (JNIEnv *, jobject);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    setDirectIO
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jFUSE_lowlevel_FileInfo_setDirectIO
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    getDirectIO
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_jFUSE_lowlevel_FileInfo_getDirectIO
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    setKeepCache
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jFUSE_lowlevel_FileInfo_setKeepCache
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    getKeepCache
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_jFUSE_lowlevel_FileInfo_getKeepCache
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    setFlush
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jFUSE_lowlevel_FileInfo_setFlush__Z
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    setFlush
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jFUSE_lowlevel_FileInfo_setFlush__
  (JNIEnv *, jobject);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    setNonSeekable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jFUSE_lowlevel_FileInfo_setNonSeekable
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    getNonSeekable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jFUSE_lowlevel_FileInfo_getNonSeekable
  (JNIEnv *, jobject);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    setFh
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jFUSE_lowlevel_FileInfo_setFh
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    getFh
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_jFUSE_lowlevel_FileInfo_getFh
  (JNIEnv *, jobject);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    setLockOwner
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jFUSE_lowlevel_FileInfo_setLockOwner
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jFUSE_lowlevel_FileInfo
 * Method:    getLockOwner
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_jFUSE_lowlevel_FileInfo_getLockOwner
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif