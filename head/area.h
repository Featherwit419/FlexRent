#ifndef _AREA
#define _AREA

#include "typedefine.h"
#include "community.h"

struct Area{
    char * name;
    struct CommunityList communityList;
};

struct AreaListNode{
    struct Area * data;
    struct AreaListNode * nxt;
};

struct AreaList{
    struct AreaListNode head;
    int cnt;
};

#endif