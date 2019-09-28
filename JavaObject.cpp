#include "JavaObject.h"

std::string JavaObjectAccessor::getStringFieldByName(const char *fieldName) {
  std::string name="hellworld";

  return name;
}

std::string JavaObjectAccessor::setStringFieldByName(const char *fieldName, std::string value) {
    std::string name="hellworld";
    return name;
}

int JavaObjectAccessor::getIntFieldByName(const char *fieldName) {
    return 0;
}
void JavaObjectAccessor::setIntFieldByName(const char *fieldName, int value) {


}

jobject JavaObjectAccessor::getJObject() {
    return this->object;
}


void JavaObjectAccessor::initJObject(JNIEnv *env, jobject src) {
    this->env = env;
    this->object = src;
}

JavaObjectAccessor C2Java::allocJavaObjectAccessor() {
    JavaObjectAccessor accessor;
    //todo
    //std::string classPath= getToJavaClassPath();
    //find class in gload//
    jobject  newObj = 0; //"find in gload"
    JNIEnv* env;
    accessor.initJObject(env,newObj);
    return accessor;
}

std::string C2Java::getToJavaClassPath() {
    std::string defaultClas = "";
    return defaultClas;
}

jobject C2Java::transFromC(){

     return 0;
}



