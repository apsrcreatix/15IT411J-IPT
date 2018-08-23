// adding two variable and passing the sum to java program
#include <jni.h>
#include <stdio.h>
#include "JniObjectPassing.h"

JNIEXPORT void JNICALL Java_JniObjectPassing_modifyInstanceVariable
  (JNIEnv *env, jobject thisObj){
   // Get a reference to this object's class
   jclass thisClass = (*env)->GetObjectClass(env, thisObj);
 
   // int
   // Get the Field ID of the instance variables "number"
   jfieldID fidvalue1 = (*env)->GetFieldID(env, thisClass, "value1", "I");
   if (NULL == fidvalue1) return;
   jfieldID fidvalue2 = (*env)->GetFieldID(env, thisClass, "value2", "I");
   if (NULL == fidvalue2) return;
    jfieldID fidsum = (*env)->GetFieldID(env, thisClass, "sum", "I");
   if (NULL == fidsum) return;
 
   // Get the int given the Field ID
   jint value1 = (*env)->GetIntField(env, thisObj, fidvalue1);
   jint value2 = (*env)->GetIntField(env, thisObj, fidvalue2);
  	jint sum = (*env)->GetIntField(env, thisObj, fidsum);
   
   // Change the variable
   sum = value1 + value2;
   (*env)->SetIntField(env, thisObj, fidsum, sum);

}