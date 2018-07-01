#include <jni.h>
int count = 0;
extern "C" JNIEXPORT jint
JNICALL
Java_com_ah_ndksample_MainActivity_countFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    return count++;
}
