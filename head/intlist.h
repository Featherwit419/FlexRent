#ifndef _INT_LIST
#define _INT_LIST

#include <stdbool.h>

// int 类型单项链表节点
struct IntListNode{
    int value; //值
    struct IntListNode * nxt; // 下一个节点地址
};

// int 类型单项链表
struct IntList{
    struct IntListNode * head; // 首节点
    int cnt; //节点个数
};

// 链表初始化
void init(struct IntList * list);

// 获得元素个数并返回
int getListCnt(struct IntList * list);

// 查询是否出现某个值
bool findValue(struct IntList * list, int w);

// 将链表转为 int 数组，返回数组首地址
int * IntListToIntArray(struct IntList * list);

// 将 int 数组转为链表，返回新的链表
struct IntList IntArrayToIntList(int * array);

// 链表头部插入节点，返回新的链表
struct IntList addHead(struct IntList * list, int w);

// 链表尾部插入节点，返回新的链表
struct IntList addTail(struct IntList * list, int w);

// 在特定节点后插入节点，返回新的链表
struct IntList addNode(struct IntList * list, struct IntListNode * node, int w);

// 删除链表头部节点，返回新的链表
struct IntList delHead(struct IntList * list, int w);

// 删除链表尾部节点，返回新的链表
struct IntList delTail(struct IntList * list, int w);

// 删除特定节点后节点，返回新的链表
struct IntList delNode(struct IntList * list, struct IntListNode * node);

#endif