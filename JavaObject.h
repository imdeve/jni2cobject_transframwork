#ifndef UNTITLED_JAVAOBJECT_H
#define UNTITLED_JAVAOBJECT_H

#include <string>
typedef int jint;
typedef int jobject;

class JNIEnv{
};

class JavaObjectAccessor{
private:
    jobject  object;
    JNIEnv* env;
    public:
        int getIntFieldByName(const char* fieldName);
        std::string getStringFieldByName(const char* fieldName);
        void setIntFieldByName(const char* fieldName,int value);
        std::string setStringFieldByName(const char* fieldName,std::string value);
    public:
        void initJObject(JNIEnv* env,jobject src);
        jobject getJObject();
};



class C2Java{
    private:
        JavaObjectAccessor *java;
    public:
        virtual  std::string getToJavaClassPath();
        JavaObjectAccessor  allocJavaObjectAccessor();
        virtual  jobject transFromC();

};

#define C2JClassDef(srcT)\
    class C2J_##srcT :public C2Java{\
    private :\
        srcT s;\
        public:\
         std::string getToJavaClassPath();\
          inline  void set(srcT src){this->s = src;}\
          jobject transFromC();\
  };
/*
 *toExistType要转化的目标类型
 * */
#define J2CExistClassDef(toExistDestType)\
    class J2C_##toExistDestType :public JavaObjectAccessor\
    {\
    public:\
        toExistDestType transToC();\
    };

#endif //UNTITLED_JAVAOBJECT_H
