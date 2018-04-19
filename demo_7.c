#include <stdio.h>
#include <stdbool.h>
/*
*
代表一个指针变量
int *int_pointer 就是一个整型指针变量

&
地址运算符，用于生成指向某个目标的指针
&count 生成一个指向 变量count 的指针

int_pointer = &count;


*/

int
stringLength(const char string[]) {
    int count = 0;
    while (string[count] != '\0') {
        count++;
    }
    printf("stringLength == %i\n", count);
    return count;
}

int
testScanf(void) {
    char str1[81];
    scanf("%s", str1);
    printf("str1 == %s", str1);
    return 0;
}

void
testLines(void) {
    char str[] = {
        "hello"
        "world"
    };
    printf("str == %s", str);
}

int
main(void) {
//    char str[] = "hey!";
//    stringLength(str);
//    testScanf();
    testLines();
    return 0;
}
