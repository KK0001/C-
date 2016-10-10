#include <stdio.h>

int main(void)
{
    //変数の宣言
    int num;
    char rep;

    //入力部分
    printf("5が入力されたら「Hamster」、5以外が入力されたら「Gorilla」を返します。\n→ ");
    scanf("%d",&num);

    //条件分岐
    if(num==5)
        rep='H';
    else
        rep='G';

    printf("%c\n",rep);

    //プログラム終了
    return 0;
}

