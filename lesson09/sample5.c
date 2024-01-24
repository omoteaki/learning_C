#include <stdio.h>

int main(void) {
    int a;
    int *pa;

    a = 5;
    pa = &a;

    printf("変数aの値は%d\n", a);
    *pa = 50;

    printf("*paに50を代入\n");
    printf("変数aの値は%d\n", a);


    return 0;
}