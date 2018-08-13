#include "JNIDemo.h"

JNIEXPORT void JNICALL Java_JNIDemo_display(JNIEnv *env, jobject obj)
{
char name[30];
printf("What is your name?\n");
scanf("%s",name);
printf("Hello %s, you are running JNIDemo\n", name);
}
int main()
{
return  0;
}

//gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" --shared -o libJNIDemo.so JNIDemo.c