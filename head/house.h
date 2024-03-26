#ifndef _HOUSE
#define _HOUSE

#include "typedefine.h"
#include "date.h"
#include "viewhousemsg.h"
#include "renthousemsg.h"
struct House{
    int id; //房源编号
    int price; //租金
    int S; //面积
    int floor;
    bool isDel;
    char * ownerName;
    char * ownerPhone;
    struct Community * father;
    char * introduce; //房屋介绍
    char * address; //房源地址
    char * type; //房型
    struct Date buildDate; //建造日期
    struct Tag * direction; //房屋朝向
    struct Tag * decorationLevel; //装修程度(0-100)
    struct Tag * houseType; //房型
    struct VHMList viewMsgList;
    struct RHMList rentMsgList;
};

struct HouseListNode{
    struct House * data;
    struct HouseListNode * nxt;
};

struct HouseList{
    struct HouseListNode head;
    int cnt;
};

#endif