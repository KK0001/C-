#include <stdio.h>

int main(void)
{
    //変数の宣言
    int i,tmp;
    int a[10];

    //誘導表示
    printf("入力された10個の数値を降順に並び替えます。\n");

    //入力部分
    for(i=0;i<10;i++)
    {
        printf("%d番目の数=>",i+1);
        scanf("%d",&a[i]);
    }

    //並び替え部分
    for (i=0; i<10; ++i) {
        for (int j=i+1; j<10; ++j) {
            if (a[j] > a[i]) {
                tmp =  a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }

    //表示部分
    for(i=0;i<10;i++)
        printf("%d  ",a[i]);

    return 0;//プログラム終了
};




