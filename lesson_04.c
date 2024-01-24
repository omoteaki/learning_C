#include <stdio.h>

int main(void) {
    // printf("1+2は%dです。\n", 1 + 2);
    // printf("3*4は%dです。\n", 3 * 4);

    /* sample2 */
    // int num1 = 2;
    // int num2 = 3;
    // int sum = num1 + num2;

    // printf("変数num1の値は%dです。\n", num1);
    // printf("変数num2の値は%dです。\n", num2);
    // printf("num1+num2の値は%dです。\n", sum);

    // num1 = num1 + 1;
    // printf("変数num1の値に1を足すと%dです。\n", num1);

    /* sample3 */
    // int num1, num2;
    // printf("整数1を入力してください\n");
    // scanf("%d", &num1);
    // printf("整数2を入力してください\n");
    // scanf("%d", &num2);
    // printf("足し算の結果は%dです。\n", num1 + num2);

    /* sample4 */
    // int num3 = 10;
    // int num4 = 5;

    // printf("num3とnum4にいろいろな演算を行います。\n");
    // printf("num3+num4は%dです。\n", num3 + num4);
    // printf("num3-num4は%dです。\n", num3 - num4);
    // printf("num3*num4は%dです。\n", num3 * num4);
    // printf("num3/num4は%dです。\n", num3 / num4);
    // printf("num3%%num4は%dです。\n", num3 % num4);  /* %を文字として出力したい場合は%%二つかさねる */

    /* sample5
    前置・後置インクリメント演算子
    表記の違いによって実行結果が異なる
    */

    // int a = 0;
    // int b = 0;

    // b = a++;
    // printf("b = a++のときbは%d、aは%d\n", b, a);
    // /* 代入した後にインクリメント */

    // a = 0;
    // b = 0;

    // b = ++a;
    // printf("b = ++aのときbは%d、aは%d\n", b, a);
    // /* インクリメントしてから代入 */

    /* sample6
    複合的な代入演算子
    */

    // int sum6 = 0;
    // int num6 = 0;

    // printf("1番目の整数>>\n");
    // scanf("%d", &num6);
    // sum6 += num6;

    // printf("2番目の整数>>\n");
    // scanf("%d", &num6);
    // sum6 += num6;

    // printf("3番目の整数>>\n");
    // scanf("%d", &num6);
    // sum6 += num6;

    // printf("3つの数の合計は%d\n", sum6);


    /* sample7
    sizeof演算子
    */
    // int p = 1;
    // int q = 0;

    // printf("short int型のサイズ\t%dバイト\n",   sizeof(short int));
    // printf("int型のサイズ\t%dバイト\n",         sizeof(int));
    // printf("long int型のサイズ\t%dバイト\n",    sizeof(long int));
    // printf("float型のサイズ\t%dバイト\n",       sizeof(float));
    // printf("double型のサイズ\t%dバイト\n",      sizeof(double));
    // printf("long double型のサイズ\t%dバイト\n", sizeof(long double));
    // printf("変数pのサイズ\t%dバイト\n",         sizeof(p));
    // printf("式p+qのサイズ\t%dバイト\n",         sizeof(p + q));
    /* 注意が出た
    lesson_04.c:85:57: warning: format specifies type 'int' but the argument has type 'unsigned long' [-Wformat]
    printf("short int型のサイズ\t%dバイト\n",   sizeof(short int));
                                 ~~             ^~~~~~~~~~~~~~~~~
                                 %lu
    */

    /* シフト演算 */
    // int s = 5;
    // int t = 2;

    // printf("%d\n", 5 << 2);
    // /* 2桁左にずらす */

    /* sample8
    型変換
    */

    // int inum;
    // double dnum;

    // inum = 160;

    // printf("身長は%dセンチ\n", inum);
    // printf("double型の変数に代入\n");

    // /*
    // dnum = inum;
    // キャスト演算子を使うと↓
    // */
    // dnum = (double) inum;
    // printf("身長は%fセンチ\n", dnum);
    // /* 大きなサイズの型の変数に小さなサイズの型の値を代入することができる */

    // /* sample9 */
    // dnum = 160.5;

    // printf("身長は%fセンチ\n", dnum);
    // printf("int型の変数に代入\n");

    // inum = (int) dnum;
    // printf("身長は%dセンチ\n", inum);

    /* sample10
    異なる型どうしの演算
    */

    // int d = 2;
    // double pi = 3.14;

    // printf("直径%dセンチの円、円周は%fセンチ\n", d, d * pi);
    /* 一方のオペランドを大きなサイズのほうに型変換してから演算を行う */

    /* sample11
    同じ型どうしの演算
    */

    int num_a, num_b;
    double div;

    num_a = 5;
    num_b = 4;

    div = num_a / num_b;
    /* int型どうしのため、5/4が1というint型の値になっている */
    printf("5/4は%f\n", div);

    div = (double) num_a / (double) num_b;
    printf("5/4は%f\n", div);

    return 0;
}