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
*/

int
test(int num) {
    num--;
    printf("num == %i\n", num);

    return num;
}

int
main(void) {
    int n = 2;
    n = test(n);
    printf("num == %i\n", n);

    return 0;
}
