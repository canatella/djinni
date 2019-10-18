// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#include "NativeConstantRecord.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeConstantRecord::NativeConstantRecord() = default;

NativeConstantRecord::~NativeConstantRecord() = default;

auto NativeConstantRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeConstantRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.some_integer)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.some_string)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeConstantRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeConstantRecord>::get();
    return {::djinni::I32::toCpp(jniEnv, (jniEnv->GetIntField(j, data.field_mSomeInteger))),
            ::djinni::String::toCpp(jniEnv, reinterpret_cast<jstring>(jniEnv->GetObjectField(j, data.field_mSomeString)))};
}

}  // namespace djinni_generated
