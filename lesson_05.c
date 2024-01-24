#include <stdio.h>

int main(void) {
    // int res;
    // printf("整数を入力>>>\n");
    // scanf("%d", &res);

    /* 1文だけだと、ブロックにしないでも正常に処理されるが、
    if (res == 1)
        printf("1が入力されました\n");
        printf("ブロックがないと1が入力されても、されなくてもこの文が表示されてしまう。\n");
    */
    /*
    if (res == 1) {
        printf("1が入力されました\n");
        // printf("ブロックに囲んだ部分の複数の文が実行される。\n");
    } else if (res == 2){
        printf("2が入力されました\n");
    } else {
        printf("1か2を入力してください\n");
    }
    */

    /*
    上記をswitch文に書き換える
    switch文の場合、値を判断する式は整数や文字でなければならない
    breakの場所に注意
    switch文は、強制的に文の流れを切られない限り、ブロック中の文が順次実行される。
    */
    // switch (res) {
    //     case 1:
    //         printf("1が入力されました\n");
    //         break;
    //     case 2:
    //         printf("2が入力されました\n");
    //         break;
    //     default:
    //         printf("1か2を入力してください\n");
    //         break;
    // }




    /* sample6
    論理演算子
    */

    // char response;

    // printf("あなたは猫派ですか？Y/N>>>\n");

    // response = getchar();

    // if (response == 'Y' || response == 'y') {
    //     printf("猫は最高ですね。\n");
    // } else if (response == 'N' || response == 'n') {
    //     printf("犬もかわいいです。\n");
    // } else {
    //     printf("YかNを入力してください\n");
    // }


    /* sample7
    条件演算子
    */

    int num;
    char ans;

    printf("何番目を選びますか？整数>>>\n");

    scanf("%d", &num);

    ans = (num == 1) ? 'A' : 'B';

    printf("%cコースを選択しました。\n", ans);

    return 0;

}