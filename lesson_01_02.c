#include <stdio.h>      /* header file */

/* #がついた行は、プリプロセッサによって他のコードを翻訳する前に読み込まれることになっている
#がついた行には;はつけない */


/* main()と書かれているところから処理が行われる */
/* main関数 */
// int main(void) {
//     printf("ようこそC言語へ!\n");       /* statement */
//     printf("C言語を始めましょう!\n");
//     return 0;
// }


/*
Lesson2
いろいろな値を出力する

%◯  変換仕様(conversion specification)
*/

int main(void) {

    /* sample4 */
    printf("%cは文字です。\n", 'A');
    printf("%dは整数です。\n", 123);
    printf("%fは少数です。\n", 10.5);

    /* sample5 */
    printf("バックスラッシュを表示します。：%c\n", '\\');
    printf("アポストロフィを表示します。：%c\n", '\'');

    /* sample6 */
    printf("8進数101の文字コードをもつ文字は%cです。\n", '\101');
    printf("16進数61の文字コードをもつ文字は%cです。\n", '\x61');

    /*
    文字列(string literal)
    */

    /* sample7 */
    printf("10進数の10は%dです。\n", 10);
    printf("8進数の10は%dです。\n", 010);
    printf("16進数の10は%dです。\n", 0x10);
    printf("16進数のFは%dです。\n", 0xF);

    /* sample8 */
    printf("%cは文字、%dは整数です。\n", 'A', 123);
    printf("%dは整数、%fは少数です。\n", 123, 10.5);
    printf("%c、%c。\n", 'A', 'B');

    /* 練習3 */
    printf("%d\n", 123);
    printf("¥%dもらった\n", 100);
    printf("また明日\n");

    /* 練習4 */
    printf("%d\t%d\t%d\n", 1, 2, 3);

    /* 練習5 8進数の場合 */
    printf("%d\n", 06);
    printf("%d\n", 024);
    printf("%d\n", 015);

    /* 練習5 16進数の場合 */
    printf("%d\n", 0x6);
    printf("%d\n", 0x14);
    printf("%d\n", 0xD);

    return 0;
}