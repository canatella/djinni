// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#pragma once

#include "djinni_support.hpp"
#include "set_record.hpp"

namespace djinni_generated {

class NativeSetRecord final {
public:
    using CppType = ::SetRecord;
    using JniType = jobject;

    using Boxed = NativeSetRecord;

    ~NativeSetRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeSetRecord();
    friend ::djinni::JniClass<NativeSetRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/SetRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/HashSet;)V") };
    const jfieldID field_mSet { ::djinni::jniGetFieldID(clazz.get(), "mSet", "Ljava/util/HashSet;") };
};

}  // namespace djinni_generated
