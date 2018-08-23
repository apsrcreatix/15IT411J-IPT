#include <stdio.h>
#include <ctype.h>
#include "JniExceptions.h"

JNIEXPORT jint JNICALL Java_JniExceptions_intMethod (JNIEnv * env, jobject jobj, jint n1,jint n2) {
    return n1*n2;
}


JNIEXPORT jboolean JNICALL Java_JniExceptions_booleanMethod (JNIEnv * env, jobject jobj, jboolean jbool) {
    return !jbool;
}


JNIEXPORT jstring JNICALL Java_JniExceptions_stringMethod (JNIEnv * env, jobject jobj, jstring jstr) {
    const char* str = (*env)->GetStringUTFChars(env, jstr, NULL);
    int i = 0,len = (*env)->GetStringUTFLength(env, jstr);

    char stra[100];
    for(i=0; i<len; i++) {
        stra[i] = toupper(str[i]);
    }

    stra[i] = '\0';

    jstring strb = (*env)->NewStringUTF(env, stra);
    return strb;
}


JNIEXPORT void JNICALL Java_JniExceptions_doIt (JNIEnv * env, jobject jobj) {
    jclass jcls = (*env)->GetObjectClass(env, jobj);
    jmethodID mid = (*env)->GetMethodID(env, jcls, "callback", "()V");
    (*env)->CallVoidMethod(env, jobj, mid);

    jthrowable exc = (*env)->ExceptionOccurred(env);
    if (exc) {
        (*env)->ExceptionDescribe(env);
        (*env)->ExceptionClear(env);
    }

    jclass Exception1 = (*env)->FindClass(env, "java/lang/IllegalArgumentException");
    (*env)->ThrowNew(env, Exception1, "Exception From C");
}

