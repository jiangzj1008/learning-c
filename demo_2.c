#include <stdio.h>

/*
自增和自减
++n == n++
*/

int
triNumber(int num) {
    int i, result;

    result = 0;
    for (i = 1; i <= num; i++) {
        result += i;
    }
    printf("第%i个三角数是%5i\n", num, result);

    return 0;
}

int
test(void) {
    int n = 1;

    printf("++n 的 n 是%-.10i\n", ++n);
    printf("n++ 的 n 是%i\n", n++);

    return 0;
}

int
main(void) {
    int num;

    // printf("输入三角数\n");
    // scanf("%i", &num);
    // triNumber(num);
    test();

    return 0;
}
