#include <stdio.h>

/*
函数的定义
1、谁能调用这个函数
2、函数的返回值类型
3、函数的名字
4、函数的参数
int count(int number);

形参
函数不会改变参数的实际值

自动局部变量 auto
函数体内部自定义的变量，其他程序无法访问这些变量
一般会用auto关键字，也可以省略
auto int i

类型转换
作为参数输入的变量，应该要转化为函数定义时设置的参数类型，如果没有手动转，编译器会自动进去转化

不定数目参数
int printf(char* format, ...);

多维数组作为函数的参数
必须声明数组中每一行有多少个元素
int array_sort(int array[100][50]) / int array_sort(int array[][50])
*/

int
minimum(int val[10]) {
    int minVal;
    int i;

    minVal = val[0];
    for (i = 1; i < 10; i++) {
        if (val[i] < minVal) {
            minVal = val[i];
        }
    }

    return minVal;
}

int
testMinimum(void) {
    int scores[10];
    int i;
    int minScore;

    for (i = 0; i < 10; ++i) {
        printf("input number %i : ", i);
        scanf("%i", &scores[i]);
    }
    minScore = minimum(scores);
    printf("minScore is %i\n", minScore);

    return 0;
}

void
changeArray(int array[], int n) {
    int i;

    // 可以改变指针所指的值
    for (i = 0; i < n; i++) {
        array[i] *= 2;
    }

    // 无法直接改变指针的指向
    // array = NULL;
}

int
testChangeArray(void) {
    int array[3] = {1, 2, 3};
    int i;

    changeArray(array, 3);
    for (i = 0; i < 3; i++) {
        printf("array[%i] is %i\n", i, array[i]);
    }

    return 0;
}

int
main(void) {
    // testMinimum();
    testChangeArray();
    return 0;
}
