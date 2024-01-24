#include <stdio.h>

int main(void) {
    int a, b;
    int *pa;

    a = 5;
    b = 10;
    pa = &a;

    printf("変数aの値は%d\n", a);
    printf("変数aのアドレスは%p\n", &a);
    printf("ポインタpaのアドレスは%p\n", pa);
    printf("*paの値は%d\n", *pa);

    pa = &b;

    printf("変数bの値は%d\n", b);
    printf("変数bのアドレスは%p\n", &b);
    printf("ポインタpaの変更後のアドレスは%p\n", pa);
    printf("*paの値は%d\n", *pa);

    return 0;

}