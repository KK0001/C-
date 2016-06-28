#include<stdio.h>

int main(void)
{
    //変数の宣言
    int a[10]={2,-8,5,-4,6,5,7,-3,-9,1};
    int count1=0,count2=0,count3=0;//奇数、偶数、負の数のカウント

    //算出部分
    for(int i=0;i<10;i++)
    {
        if (a[i]%2 != 0)
            count1 += 1;
        else if (a[i]%2 == 0)
            count2 += 1;
    }
    for(int i=0;i<10;i++)
        if(a[i]<0)
            count3+=1;

    //出力
    printf("奇数が%dつ、偶数が%dつ、負の数が%dつあります。\n",count1,count2,count3);

    return 0;//プログラム終了
}

