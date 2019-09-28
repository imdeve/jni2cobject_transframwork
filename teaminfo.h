//
// Created by Administrator on 2019/9/28.
//

#ifndef UNTITLED_TEAMINFO_H
#define UNTITLED_TEAMINFO_H

#include "JavaObject.h"

class TeamInfo{
public:
    int age;
    std::string name;
    std::string password;
};

C2JClassDef(TeamInfo);

J2CExistClassDef(TeamInfo);

#endif //UNTITLED_TEAMINFO_H
