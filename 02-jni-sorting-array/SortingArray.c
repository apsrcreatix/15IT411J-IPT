#include "SortingAay.h"
// for qsort
#include <stdlib.h> 
int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
JNIEXPORT jintArray JNICALL Java_SortingArray_sorting
  (JNIEnv *env, jobject thisObject, jintArray inJNIArray){
  	// converting the JNI's integer array to C's integer array
  	jint *inCArray = (*env)->GetIntArrayElements(env,inJNIArray,NULL);
  	if(NULL == inCArray) return NULL;
  	jsize length = (*env)->GetArrayLength(env,inJNIArray);

	// sorting
  	jint sum = 0;
  	int i;
  	qsort(inCArray,length,sizeof(int),compare);
  	// allocating space to new integer array for returning 
  	jintArray outJNIArray = (*env)->NewIntArray(env,length);
  	if(NULL==outJNIArray) return NULL ;
  	(*env)->SetIntArrayRegion(env,outJNIArray,0,length,inCArray);
	(*env)->ReleaseIntArrayElements(env,inJNIArray,inCArray,0);
	return outJNIArray;
  }	