#include <stdio.h>
int main(void)
{
    //変数の宣言
    int str1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int str2[3][3]={{1,1,4},{1,2,3},{5,6,9}};
    int WA[3][3];
    int Tutomu[3][3];
    int s,t,u;

    //和の算出
    for(s=0;s<3;s++){
        for(t=0;t<3;t++){
            WA[s][t]=str1[s][t]+str2[s][t];
        }
    }

    //和の出力
    for(s=0;s<3;s++){
        for(t=0;t<3;t++){
            printf("%5d",WA[s][t]);
        }
        printf("\n");
    }
    printf("\n");

    //積の算出
    for ( s=0; s< 3; s++)
        for ( t=0; t< 3; t++){
            Tutomu[s][t] = 0;
            for( u=0; u< 3; u++)
                Tutomu[s][t] += str1[s][u]*str2[u][t];
        }

    //積の出力
    for(s=0;s<3;s++) {
        for (t = 0; t < 3; t++) {
            printf("%5d ", Tutomu[s][t]);
        }
        printf("\n");
    }

    //プログラム終了
    return 0;
}

