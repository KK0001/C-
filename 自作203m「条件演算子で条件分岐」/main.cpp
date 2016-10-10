#include<stdio.h>
int main(void)
{
    //変数の宣言
    int a,b;

    //入力部分
    printf("「a>b」におけるaとbを入力してください。\n真偽を返します。\n");
    printf("a→");
    scanf("%d",&a);
    printf("b→");
    scanf("%d",&b);

    //条件分岐（出力）
    printf("「%d>%d」の真偽は....\n",a,b);
    if(a>b)
        printf("真：真偽値=%d\n",a>b);
    else
        printf("偽:真偽値=%d\n",a>b);

    //プログラム終了
    return 0;
}

