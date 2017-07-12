# KotlinWithJNI
Android NDK samples with Kotlin
# Notes:
This a sample project done to present the accessing the data classes of type Kotlin from native.cpp.
You find there are 3 model class defined in a single Kotlin file named Employee.kt( please ignor the file name ). 
We need not have setter getter as it will be auto handled for us by Kotlin. Just define a variable in constructor, you can also have default values to it.


# Accessing Kotlin data class
Intresting part here is that from native.cpp we can access the Kotlin data class
infact all the kotlin data class defined in a single kotlin file. i.e Bank, Engineer and Student.

eg :     jclass bank_class = env->FindClass( "kotlindemo/test/com/myapplication/model/Bank");

# Accessing the setter of Kotlin data class
In JNI we can easily access the setter methods of a kotlin data class. Good bye to POJO :)

eg :    jmethodID jmethodID1 = env->GetMethodID( bank_class,  "setName", "(Ljava/lang/String;)V" );



