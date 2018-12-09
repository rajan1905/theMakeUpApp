#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_makeup_adwell_com_make_1up_IntroActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
