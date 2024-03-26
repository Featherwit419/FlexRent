#ifndef _COMMUNITY
#define _COMMUNITY

#include "typedefine.h"
#include "house.h"

struct Community{
    char * name;
    char * address;
    struct Area * father;
    struct HouseList houseList;
};

struct CommunityListNode{
    struct Community * data;
    struct CommunityListNode * nxt;
};

struct CommunityList{
    struct CommunityListNode head;
    int cnt;
};

#endif