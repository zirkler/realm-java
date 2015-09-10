/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_realm_internal_TableQuery */

#ifndef _Included_io_realm_internal_TableQuery
#define _Included_io_realm_internal_TableQuery
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeClose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeValidateQuery
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_TableQuery_nativeValidateQuery
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeTableview
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeTableview
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeGroup
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeGroup
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeEndGroup
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeEndGroup
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeSubtable
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeSubtable
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeParent
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeParent
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeOr
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeOr
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeNot
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeNot
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeEqual
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeEqual__J_3JJ
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeNotEqual
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeNotEqual__J_3JJ
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeGreater
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeGreater__J_3JJ
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeGreaterEqual
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeGreaterEqual__J_3JJ
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeLess
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeLess__J_3JJ
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeLessEqual
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeLessEqual__J_3JJ
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeBetween
 * Signature: (J[JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeBetween__J_3JJJ
  (JNIEnv *, jobject, jlong, jlongArray, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeEqual
 * Signature: (J[JF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeEqual__J_3JF
  (JNIEnv *, jobject, jlong, jlongArray, jfloat);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeNotEqual
 * Signature: (J[JF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeNotEqual__J_3JF
  (JNIEnv *, jobject, jlong, jlongArray, jfloat);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeGreater
 * Signature: (J[JF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeGreater__J_3JF
  (JNIEnv *, jobject, jlong, jlongArray, jfloat);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeGreaterEqual
 * Signature: (J[JF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeGreaterEqual__J_3JF
  (JNIEnv *, jobject, jlong, jlongArray, jfloat);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeLess
 * Signature: (J[JF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeLess__J_3JF
  (JNIEnv *, jobject, jlong, jlongArray, jfloat);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeLessEqual
 * Signature: (J[JF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeLessEqual__J_3JF
  (JNIEnv *, jobject, jlong, jlongArray, jfloat);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeBetween
 * Signature: (J[JFF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeBetween__J_3JFF
  (JNIEnv *, jobject, jlong, jlongArray, jfloat, jfloat);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeEqual
 * Signature: (J[JD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeEqual__J_3JD
  (JNIEnv *, jobject, jlong, jlongArray, jdouble);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeNotEqual
 * Signature: (J[JD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeNotEqual__J_3JD
  (JNIEnv *, jobject, jlong, jlongArray, jdouble);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeGreater
 * Signature: (J[JD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeGreater__J_3JD
  (JNIEnv *, jobject, jlong, jlongArray, jdouble);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeGreaterEqual
 * Signature: (J[JD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeGreaterEqual__J_3JD
  (JNIEnv *, jobject, jlong, jlongArray, jdouble);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeLess
 * Signature: (J[JD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeLess__J_3JD
  (JNIEnv *, jobject, jlong, jlongArray, jdouble);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeLessEqual
 * Signature: (J[JD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeLessEqual__J_3JD
  (JNIEnv *, jobject, jlong, jlongArray, jdouble);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeBetween
 * Signature: (J[JDD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeBetween__J_3JDD
  (JNIEnv *, jobject, jlong, jlongArray, jdouble, jdouble);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeEqual
 * Signature: (J[JZ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeEqual__J_3JZ
  (JNIEnv *, jobject, jlong, jlongArray, jboolean);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeEqualDateTime
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeEqualDateTime
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeNotEqualDateTime
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeNotEqualDateTime
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeGreaterDateTime
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeGreaterDateTime
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeGreaterEqualDateTime
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeGreaterEqualDateTime
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeLessDateTime
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeLessDateTime
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeLessEqualDateTime
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeLessEqualDateTime
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeBetweenDateTime
 * Signature: (J[JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeBetweenDateTime
  (JNIEnv *, jobject, jlong, jlongArray, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeEqual
 * Signature: (J[JLjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeEqual__J_3JLjava_lang_String_2Z
  (JNIEnv *, jobject, jlong, jlongArray, jstring, jboolean);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeNotEqual
 * Signature: (J[JLjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeNotEqual__J_3JLjava_lang_String_2Z
  (JNIEnv *, jobject, jlong, jlongArray, jstring, jboolean);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeBeginsWith
 * Signature: (J[JLjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeBeginsWith
  (JNIEnv *, jobject, jlong, jlongArray, jstring, jboolean);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeEndsWith
 * Signature: (J[JLjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeEndsWith
  (JNIEnv *, jobject, jlong, jlongArray, jstring, jboolean);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeContains
 * Signature: (J[JLjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeContains
  (JNIEnv *, jobject, jlong, jlongArray, jstring, jboolean);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeFind
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeFind
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeFindWithHandover
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeFindWithHandover
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeFindAll
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeFindAll
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeFindAllWithHandover
 * Signature: (JJJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeFindAllWithHandover
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeFindAllSortedWithHandover
 * Signature: (JJJJJJJZ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeFindAllSortedWithHandover
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jboolean);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeFindAllMultiSortedWithHandover
 * Signature: (JJJJJJ[J[Z)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeFindAllMultiSortedWithHandover
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong, jlong, jlongArray, jbooleanArray);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeImportHandoverTableViewIntoSharedGroup
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeImportHandoverTableViewIntoSharedGroup
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeImportHandoverRowIntoSharedGroup
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeImportHandoverRowIntoSharedGroup
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeHandoverQuery
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeHandoverQuery
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeSumInt
 * Signature: (JJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeSumInt
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeMaximumInt
 * Signature: (JJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeMaximumInt
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeMinimumInt
 * Signature: (JJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeMinimumInt
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeAverageInt
 * Signature: (JJJJJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_TableQuery_nativeAverageInt
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeSumFloat
 * Signature: (JJJJJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_TableQuery_nativeSumFloat
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeMaximumFloat
 * Signature: (JJJJJ)F
 */
JNIEXPORT jfloat JNICALL Java_io_realm_internal_TableQuery_nativeMaximumFloat
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeMinimumFloat
 * Signature: (JJJJJ)F
 */
JNIEXPORT jfloat JNICALL Java_io_realm_internal_TableQuery_nativeMinimumFloat
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeAverageFloat
 * Signature: (JJJJJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_TableQuery_nativeAverageFloat
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeSumDouble
 * Signature: (JJJJJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_TableQuery_nativeSumDouble
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeMaximumDouble
 * Signature: (JJJJJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_TableQuery_nativeMaximumDouble
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeMinimumDouble
 * Signature: (JJJJJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_TableQuery_nativeMinimumDouble
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeAverageDouble
 * Signature: (JJJJJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_TableQuery_nativeAverageDouble
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeMaximumDate
 * Signature: (JJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeMaximumDate
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeMinimumDate
 * Signature: (JJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeMinimumDate
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeIsNull
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeIsNull
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeCount
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeCount
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeRemove
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_TableQuery_nativeRemove
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_TableQuery
 * Method:    nativeCloseQueryHandover
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_TableQuery_nativeCloseQueryHandover
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
