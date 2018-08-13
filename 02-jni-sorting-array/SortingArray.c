#include "SortingArray.h"
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
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
  	bubbleSort(inCArray, length);
  	// allocating space to new integer array for returning 
  	jintArray outJNIArray = (*env)->NewIntArray(env,length);
  	if(NULL==outJNIArray) return NULL ;
  	(*env)->SetIntArrayRegion(env,outJNIArray,0,length,inCArray);
	(*env)->ReleaseIntArrayElements(env,inJNIArray,inCArray,0);
	return outJNIArray;
  }	