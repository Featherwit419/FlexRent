#ifndef _DATE
#define _DATE

#include "typedefine.h"
// 日期结构体
struct Date{
    int year, month, day;
};
// 比较两个日期的大小，大于返回大于 0 的数，小于返回小于 0 的数，等于返回 0
int cmpDate(struct Date a, struct Date b);

// 计算日期相差天数，b-a。
int subDate(struct Date a, struct Date b);

#endif