#include <stdio.h>

/*
float double
一般情况下，浮点数会被当成 double 类型处理，在数字的后面加上f可以明确其为 float 类型
%g %f %e

char
储存单个字符，只能用 单引号 包住，双引号 包住的是字符串
%c

unsigned
unsigned int counter / unsigned counter
只表示正整数，可以保存的范围变大

signed
主要用于char类型声明，表示变量是有符号的
*/

/*
25 / 2 = 12
两个整数相除，结果一定是整数

类型转换
(int)29.55 == 29
*/
int
type(void) {
    int intVar = 100;
    float floVar = 1.78f;
    double douVar = 8.44e+11;
    char charVar = 'j';
    _Bool boolVar = 0;

    printf("intVar: %i\n", intVar);
    printf("floVar: %f\n", floVar);
    printf("douVar: %e\n", douVar);
    printf("douVar: %g\n", douVar);
    printf("charVar: %c\n", charVar);
    printf("boolVar: %i\n", boolVar);

    return 0;
}

int
transition(int f) {
    float c;

    c = (f - 32) / 1.8;
    printf("华氏%i度，就是%g摄氏度\n", f, c);

    return c;
}

int
test(void) {
    char c, d;

    c = 'd';
    d = c;
    printf("d = %c\n", d);

    return 0;
}

int
main(void) {
    type();
    transition(27);
    test();

    return 0;
}
