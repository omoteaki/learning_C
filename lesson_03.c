/*
変数を宣言する(declaration)
値を代入する(assignment)
変数を初期化する(initialization)
*/

#include <stdio.h>

int main(void) {
    // int num;
    // num = 3;
    /* initialization */
    int num = 3;
    printf("変数numの値は%dです。\n", num);

    num = 5;
    printf("変数numの値を変更しました。\n");
    printf("変数numの新しい値は%dです。\n", num);

    /* sample3 */
    int num1, num2;
    num1 = 3;
    printf("変数num1の値は%dです。\n", num1);
    num2 = num1;
    printf("変数num1の値を変数num2に代入しました。\n");
    printf("変数num2の値は%dです。\n", num2);

    return 0;
}