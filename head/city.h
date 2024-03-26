#ifndef _CITY
#define _CITY

#include "typedefine.h"
#include "area.h"

struct City{
    char * name;
    struct AreaList AreaList;
};

struct CityListNode{
    struct City * data;
    struct CityListNode * nxt;
};

struct CityList{
    struct CityListNode head;
    int cnt;
};
#endif