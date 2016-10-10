#include<stdio.h>
int main(void)
{
    //変数の宣言
    int num[4],n1;
    int Total=0;

    //誘導
    printf("5つの整数を入力して下さい。\n");

    //入力
    for(int i=0;i<=4;++i)
    {
        printf("%d番目の数を入力して下さい。\n",i+1);
        scanf("%d",&num[i]);
    }

    //演算
    for(int i=0;i<=4;++i)
        Total+=num[i];

    //場合分け
    if(Total<0)
        n1=(-Total)%10;
    else
        n1=Total%10;

    //出力
    printf("入力した5つの整数の合計の1の位の数は「%d」です。\n",n1);

    //プログラム終了
    return 0;
}

