#include <stdio.h>

/* 誤ったswap関数の宣言 */
// void swap(int x, int y);
/* swap関数の宣言 */
void swap(int *px, int *py);

int main(void) {
    int num1 = 5;
    int num2 = 10;

    printf("変数num1の値は%d\n", num1);
    printf("変数num2の値は%d\n", num2);
    printf("変数num1とnum2の値を交換\n");

    // swap(num1, num2);
    swap(&num1, &num2);

    printf("変数num1の値は%d\n", num1);
    printf("変数num2の値は%d\n", num2);

    return 0;

}

/* 誤ったswap関数の定義 */
// void swap(int x, int y) {
//     int tmp;

//     tmp = x;
//     x = y;
//     y = tmp;
// }
/* 誤ったswap関数の定義 */
void swap(int *px, int *py) {
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}