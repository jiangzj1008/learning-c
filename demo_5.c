#include <stdio.h>
#include <stdbool.h>
/*
形参和实参
与数组不同，结构变量作为参数的时候，它的行为和普通变量类似
函数实际处理的只是实际参数的拷贝，对形参的任何修改，都不会影响原来的实际参数

初始化
结构的成员变量如果未定义，由编译器自行决定，可以是0或者任何值
struct time time1 = {.hour = 12}

结构数组
struct time experiments[10] = { {12,0,0}, {12,30,0}, {13,15,0} }
*/
struct
date {
    int day;
};

int
testParameter(struct date d) {
    printf("before %i\n", d.day);
    d.day++;
    printf("after %i\n", d.day);
    return d.day;
}

int
main(void) {
    struct date today;
    today.day = 7;
    testParameter(today);
    printf("end %i\n", today.day);
    return 0;
}
