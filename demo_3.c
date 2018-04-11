#include <stdio.h>
#include <stdbool.h>

/*
对于使用ASCII格式保存字符的计算机，判断字符的大小写
(c >= 'a' && c <= 'z')
(c >= 'A' && c <= 'Z')
*/

/*
数组
声明的两个要素：数组保存的类型 数组保存的最大个数
如：int grades[100]

对于未初始化的数组元素初值不进行定义

数组的初始化
int grades[5] = {0, 0, 0, 0, 0};
如果给出的初始值个数少于可容纳的个数，其余的值会初始化为0
字符串数组貌似会初始化为空

二维数组
int M[4][5]
*/

int
test(void) {
    // float init_data[10] = {
    //     10.0,
    //     11.0,
    //     12.1
    // };
    // float raw_data[10];
    char init_data[10] = {'a'};
    char raw_data[10];

    for (int i = 0; i < 10; i++) {
        printf("init_data[%i] == %c\n", i, init_data[i]);
        printf("raw_data[%i] == %c\n", i, raw_data[i]);
    }

    return 0;
}

int
main(void) {
    test();

    return 0;
}
