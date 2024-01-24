#include <stdio.h>

int main(void) {

    // char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str[] = "Hello";
    str[0] = 'h';

    printf("%s\n", str);

    return 0;
}