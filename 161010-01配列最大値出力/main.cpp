#include<stdio.h>
int main(void)
{
    //変数の宣言
    int num,a[256],max;

    //配列の長さ
    printf("配列の長さを入力して下さい。→ ");
    scanf("%d",&num);

    //入力
    for(int i=0;i<num;i++) {
        printf("%d番目の数:",i+1);
        scanf("%d", &a[i]);
    }

    //最大値
    for(int i=1; i<=num; i++)
        if (a[i] > max)
            max = a[i];


    //出力
    printf("最大値: %d\n",max);

    //プログラム終了
    return 0;
}

