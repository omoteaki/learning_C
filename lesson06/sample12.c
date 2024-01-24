#include <stdio.h>

int main(void) {
    // int res;
    int i;

    // printf("何番目の処理を飛ばすか？(1~10)\n");

    // scanf("%d", &res);

    for (i = 1; i <= 10; i++) {
        if (i % 3 == 0)
            continue;
        printf("%d番目の処理\n", i);
    }
    return 0;
}