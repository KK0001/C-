#include <stdio.h>

int main(void)
{
    //変数の宣言
    int num1, num2;

    //入力部分
    printf("2つの整数を入力せよ。 \n");
    printf("整数A: ");
    scanf("%d",&num1);
    printf("整数B: ");
    scanf("%d",&num2);

    //条件分岐（出力）
    if(num1 - num2 >= 10 || num2 - num1 >= 10)
        printf("整数の差は11以上です。 \n");
    else
        printf("整数の差は10以下です。 \n");

    //プログラム終了
    return 0;
}

