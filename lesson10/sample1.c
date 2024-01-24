#include <stdio.h>

int main(void) {
    int test[5] = {80, 60, 55, 22, 75};

    printf("test[0]の値は%d\n", test[0]);
    printf("test[0]のアドレスは%p\n", &test[0]);
    printf("test[1]の値は%d\n", test[1]);
    printf("test[1]のアドレスは%p\n", &test[1]);

    /* 配列では、配列名だけで、先頭要素のアドレスをあらわす */
    printf("testの値は%p\n", test);
    printf("*testの値は%d\n", *test);
    return 0;
}