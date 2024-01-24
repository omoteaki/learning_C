#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int main(void) {
    int num1, num2, ans;

    printf("1番目の整数\n");
    scanf("%d", &num1);
    printf("2番目の整数\n");
    scanf("%d", &num2);

    ans = sum(num1, num2);
    printf("合計は%d\n", ans);

    return 0;
}