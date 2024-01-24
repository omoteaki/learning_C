#include <stdio.h>
#define NUM 5

int main(void) {
    int test[NUM];
    int tmp;
    int i, j, s, t, c;

    printf("%d人の点数を入力してください>>>\n", NUM);
    for (i = 0; i < NUM; i++) {
        scanf("%d", &test[i]);
    }

    for (s = 0; s < NUM - 1; s++) {
        for (c = 0; c < NUM; c++) {
            printf("%d\t", test[c]);
        }
        printf("\n");

        for (t = s + 1; t < NUM; t++) {
            if (test[t] > test[s]) {
                tmp = test[t];
                test[t] = test[s];
                test[s] = tmp;
            }
            printf("内側\n");
            for (c = 0; c < NUM; c++) {
                printf("%d\t", test[c]);
            }
            printf("\n");
        }
    }

    for (j = 0; j < NUM; j++) {
        printf("%d番目の人の点数は%dです\n", j + 1, test[j]);
    }

    return 0;
}