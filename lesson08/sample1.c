#include <stdio.h>

void buy(int x) {
    printf("%d万円の車を買った\n", x);
}

int main(void) {
    buy(12);
    printf("もう一度買う\n");
    buy(23);
    buy(33);


    return 0;
}
