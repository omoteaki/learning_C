#include <stdio.h>

int main(void) {
    char str[100];
    printf("文字列を入力してください\n");

    scanf("%s", str);
    // scanf_s("%s", str, 10);
    printf("入力された文字列「%s」\n", str);

    return 0;
}