#include <stdio.h>

int main(void) {
    int res;
    int i, j;

    printf("何番目でループを中止にするか？(1~10)>>\n");

    scanf("%d", &res);

    for (j = 1; j <= 3; j++) {

        for (i = 1; i <= 10; i++) {
            printf("%d番目の処理です\n", i);
            if (i == res)
                break;  /* 抜け出すのは一つのブロックだけ */
        }
    printf("%d\n", j);
    }

    return 0;
}