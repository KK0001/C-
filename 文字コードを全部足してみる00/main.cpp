#include<stdio.h>
int main(void)
{
    //変数の宣言
    int i = 0;
    char mLine[100];
    int a = 0;

    //入力
    printf("文字列を入力して下さい→ ");
    scanf("%s",mLine);

    //計算
    while(mLine[i])
        a=a+mLine[i++];

    //出力
    printf("ASCIIコードの総和は「%d」です。",a);

    //プログラム終了
    return 0;
}


