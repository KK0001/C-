#include <stdio.h>

int main(void)
{
    //変数の宣言
    int i = 0;
    char mLine[100];

    //入力
    printf("文字列（アルファベット列）を入力して下さい→ ");
    scanf("%s", mLine);

    //出力
    printf("文字列%sの文字コードは...\n",mLine);
    while(mLine[i])
        printf("0x%02x " , mLine[i++]);

    printf("\nです。\n");

    //プログラム終了
    return 0;
}