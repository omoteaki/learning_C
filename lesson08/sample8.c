#include <stdio.h>
#define MAX(x, y) (x > y ? x : y)
/* 関数形式マクロは呼び出しのときに渡す引数はどのような型でも使える */

// int max(int x, int y) {
//     if (x > y)
//         return x;
//     else
//         return y;
// }

int main(void) {
    int num1, num2, ans;

    printf("1番目の整数\n");
    scanf("%d", &num1);
    printf("2番目の整数\n");
    scanf("%d", &num2);

    ans = MAX(num1, num2);
    printf("最大値は%d\n", ans);

    return 0;
}