#include <jni.h>
#include <stdio.h>
#include "JniObjectPassing.h"

JNIEXPORT jdouble JNICALL Java_JniObjectPassing_sum(JNIEnv *env,jobject jobj,jint a,jint b)
{
  	jdouble result;
  	printf("Passed numbers %d %d\n",a,b);
  	result = (jdouble)a+b;
  	return result;

 }