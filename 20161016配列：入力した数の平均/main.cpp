#include<stdio.h>
int main(void)
{
    //変数の宣言
    int a[5];
    double h;

    //入力
    printf("5つの数を入力\n");
    for(int i=0;i<5;i++){
        printf("%d番目の数:",i+1);
        scanf("%d",&a[i]);
    }

    //平均算出
    h=(a[0]+a[1]+a[2]+a[3]+a[4])/5;
    printf("平均:%.2f\n",h);

    //終了
    return 0;
}

