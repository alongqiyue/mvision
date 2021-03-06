#include <jni.h>


#ifdef __cplusplus
extern "C" {
#endif


jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return -1;
    }
    
    return JNI_VERSION_1_6;
}


#ifdef __cplusplus
}
#endif