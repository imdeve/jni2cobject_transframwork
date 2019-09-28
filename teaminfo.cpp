//
// Created by Administrator on 2019/9/28.
//

#include "teaminfo.h"


static const char * java_field_str_name="name";
static const char * java_field__str_password="password";
static const char * java_field_int_age="age";


TeamInfo J2C_TeamInfo::transToC() {
   std::string name= this->getStringFieldByName(java_field_str_name);
   std::string password= this->getStringFieldByName(java_field__str_password);
   int age = this->getIntFieldByName(java_field_int_age);

    TeamInfo info;
    info.age = age;
    info.name = name;
    info.password = password;

    return info;
}

std::string C2J_TeamInfo::getToJavaClassPath() {
    std::string cls = "classpath";
    return cls;
}

jobject C2J_TeamInfo::transFromC() {
    JavaObjectAccessor accessor= this->allocJavaObjectAccessor();
    accessor.setStringFieldByName(java_field_str_name,this->s.name);
    accessor.setStringFieldByName(java_field__str_password,this->s.password);
    accessor.setIntFieldByName(java_field_int_age,this->s.age);
    return accessor.getJObject();
}

