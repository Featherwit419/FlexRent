#ifndef _USER
#define _USER

#include "typedefine.h"
#include "viewhousemsg.h"
#include "renthousemsg.h"

struct User{
    char * name;
    int id;
    char * password;
    char * phoneNumber;
    struct VHMList viewList;
    struct RHMList rentList;
};
#endif