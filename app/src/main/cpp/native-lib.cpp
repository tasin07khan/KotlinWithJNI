#include <jni.h>
#include <string>

extern "C"
jobject
Java_kotlindemo_test_com_myapplication_MainActivity_bankDetailsFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    std::string bank = "SBI Bank";

    jclass bank_class = env->FindClass( "kotlindemo/test/com/myapplication/model/Bank");
    jmethodID jconstructor = env->GetMethodID( bank_class,  "<init>", "()V" );
    jobject bank_obj = env->NewObject( bank_class, jconstructor );

    jmethodID jmethodID1 = env->GetMethodID( bank_class,  "setName", "(Ljava/lang/String;)V" );
//    jstring jstr = env->NewStringUTF( hello.c_str() );
    jstring jstr = env->NewStringUTF( bank.c_str() );
    env->CallVoidMethod( bank_obj, jmethodID1, jstr );
    return bank_obj;
}


extern "C"
jobject
Java_kotlindemo_test_com_myapplication_MainActivity_employeerDetailsFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string name = "Kapilesh";

    jclass employee = env->FindClass( "kotlindemo/test/com/myapplication/model/Employee");
    jmethodID jconstructor = env->GetMethodID( employee,  "<init>", "()V" );
    jobject employee_obj = env->NewObject( employee, jconstructor );

    jmethodID jmethodID1 = env->GetMethodID( employee,  "setName", "(Ljava/lang/String;)V" );
    jstring jstr = env->NewStringUTF( name.c_str() );
    env->CallVoidMethod( employee_obj, jmethodID1, jstr );
    return employee_obj;
}


extern "C"
jobject
Java_kotlindemo_test_com_myapplication_MainActivity_studentDetailsFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string name = "Tasin";

    jclass student = env->FindClass( "kotlindemo/test/com/myapplication/model/Student");
    jmethodID jconstructor = env->GetMethodID( student,  "<init>", "()V" );
    jobject student_obj = env->NewObject( student, jconstructor );

    jmethodID jmethodID1 = env->GetMethodID( student,  "setName", "(Ljava/lang/String;)V" );
    jstring jstr = env->NewStringUTF( name.c_str() );
    env->CallVoidMethod( student_obj, jmethodID1, jstr );
    return student_obj;
}
