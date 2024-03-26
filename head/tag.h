#ifndef _TAG
#define _TAG

#include "typedefine.h"

struct Tag{
    int id;
    char * name;
    int cnt;
};

struct TagListNode{
    struct Tag * data;
    struct TagListNode * nxt;
};

struct TagList{
    struct TagListNode head;
    int cnt;
};
#endif