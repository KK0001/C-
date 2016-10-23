#include<stdio.h>
int main(void)
{
    //変数の宣言
    int mLine;
    int i =0;

    //入力
    printf("文字列（アルファベット列）を入力して下さい→");
    mLine = getchar();

    //出力
    printf("%cの文字コードは...¥n",mLine);
    while(mLine[i])
       printf("0x%02x " , mLine[i++]);


    printf("¥n");

    return 0;
}