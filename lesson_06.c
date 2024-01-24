#include <stdio.h>

// int main(void) {
//     int num, sum;
//     int i;

//     num = 0;
//     sum = 0;

//     printf("整数を入力>>>");
//     scanf("%d", &num);

//     for(i = num; i >= 1; i--) {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


int main(void) {
    // int num = 1;
    /* 1はtrueってこと？
        =>0以外の整数値が真
        =>0は偽
    */

    /* 慣用的な条件 */
    // while(num) {    /* trueの間 */
    /* while(num != 0)と同じこと */
        // printf("整数を入力(0で終了)\n");
        // scanf("%d", &num);
        // printf("%dが入力されました\n", num);
    // }
    // printf("繰り返し終了\n");

    // /*
    // 0以外のときにループを終了させるとき

    /* do~while文 */
    int num = 1;

    do {

        printf("整数を入力(0以外で終了)\n");
        scanf("%d", &num);
        printf("%dが入力されました\n", num);
    }
    while(!num);
    printf("繰り返し終了\n");
    
    // */

}