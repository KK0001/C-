#include<stdio.h>
int main(void)
{
    //変数の宣言
    int moji;

    //入力
    printf("1文字を入力してください。→");
    moji = getchar();

    //出力
    printf("%cの文字コードは0x%02xです。",moji,moji);

    //プログラム終了
    return 0;
}