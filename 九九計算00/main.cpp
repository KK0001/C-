#include <stdio.h>

int main(void)
{
    //変数の宣言
    int a[9][9];
    int i,j;

    //計算部分
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            a[i][j] = (i+1)*(j+1);

    //出力部分
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }

    return 0;//プログラム終了
}


