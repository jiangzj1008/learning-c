#include <stdio.h>
#include <stdbool.h>
/*
字符数组
初始化
char str[] = {'h', 'e', 'y', '!'};

记数
避免每次都要记住字符数组的长度，可以再字符数组的末尾加上一个标记 '\0' 表示结束
char str[] = {'h', 'e', 'y', '!', '\0'};
char str[] = "hey!";
可以显式的注明字符串的长度，但一定要包括最后的 '\0'，编译器是根据字符串是否包含这个标记来进行编译的
char str[5] = "hey!";

多行字符串输入
char str[] = {
    "hello"
    "world"
};
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
