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
    // int num = 3;
    // printf("変数numの値は%dです。\n", num);

    // num = 5;
    // printf("変数numの値を変更しました。\n");
    // printf("変数numの新しい値は%dです。\n", num);

    // /* sample3 */
    // int num1, num2;
    // num1 = 3;
    // printf("変数num1の値は%dです。\n", num1);
    // num2 = num1;
    // printf("変数num1の値を変数num2に代入しました。\n");
    // printf("変数num2の値は%dです。\n", num2);

    // /* sample4 
    // 自動的に型変換が行われ、少数点以下が切り捨てられる
    // */
    // int num_pi;
    // num_pi = 3.14;
    // printf("変数num_piの値は%dです。\n", num_pi);

    /* sample5 */
    // int num5;
    // printf("整数を入力してください。\n");
    // scanf("%d", &num5);
    // printf("%dが入力されました。\n", num5);

    /* sample6
    少数を入力する
    double型を入力するときには、%lf
    float型のときは、%fを使う
    */
    // double dbl;
    // printf("小数を入力してください。\n");
    // scanf("%lf", &dbl);
    // printf("%fが入力されました。\n", dbl);

    /* sample7
    文字を入力
    */
    // char ch;
    // printf("文字を入力してください(英数字)\n");
    // ch = getchar();
    // printf("%cが入力されました。\n", ch);

    /* 練習1 */
    int age;
    printf("あなたは何歳ですか？\n");
    scanf("%d", &age);
    printf("あなたは%d歳です。\n", age);

    /* 練習2 */
    double pi;
    printf("円周率の値はいくつですか？\n");
    scanf("lf", &pi);
    printf("円周率の値は%fです。\n");

    /* 練習3 */
    char alf;
    printf("アルファベットの最初の文字はなんですか？\n");
    alf = getchar();
    printf("アルファベットの最初の文字は%cです。\n", alf);


    /* 練習2 */
    return 0;
}