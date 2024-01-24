#include <stdio.h>
#define NUM 6   /* コードを翻訳する前に置き換えをする */
/* ここでは NUM がマクロ名 */

int main(void) {
    // int test[5];
    int i;

    // test[0] = 80;
    // test[1] = 60;
    // test[2] = 22;
    // test[3] = 50;
    // test[4] = 75;

    int test[NUM] = {80, 60, 22, 50, 75};
    /* 初期化子が足りない時は、残りの要素には0が格納される */

    for (i = 0; i < NUM; i++) {
        printf("%d番目の人の点数は%dです。\n", i +1, test[i]);
    }

    return 0;
}