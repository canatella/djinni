// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from parcelable.djinni

#include "NativeParcelableSet.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeParcelableSet::NativeParcelableSet() = default;

NativeParcelableSet::~NativeParcelableSet() = default;

auto NativeParcelableSet::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeParcelableSet>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::Set<::djinni::String>::fromCpp(jniEnv, c.set)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeParcelableSet::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeParcelableSet>::get();
    return {::djinni::Set<::djinni::String>::toCpp(jniEnv, (jniEnv->GetObjectField(j, data.field_mSet)))};
}

}  // namespace djinni_generated
