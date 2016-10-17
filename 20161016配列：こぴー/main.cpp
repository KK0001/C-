#include <stdio.h>
int main(void)
{
    //変数の宣言
    int str1[4][4]={{1,2,3,4},{1,1,2,9},{2,7,8,3},{5,6,7,8}};
    int str2[4][4];
    int i,j;

    //str1の出力（表示）
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%d",str1[i][j]);
        printf("\n");
    }

    printf("\n");

    //コピー部分
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            str2[i][j] = str1[i][j];
        }
    }

    //str2の出力（表示）
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",str2[i][j]);
        }
        printf("\n");
    }

    //プログラム終了
    return 0;
}

