#include <stdio.h>
int main()
{
    double ma[2][2];
    double det;
    int i,j,num;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("ma[%d][%d]:",i,j);
            scanf("%lf",&ma[i][j]);
        }
    }
    det=ma[0][0]*ma[1][1]-ma[0][1]*ma[1][0];
    if(det==0){
        printf("逆行列はありません。\n");
    }else{
        num=ma[0][0];
        ma[0][0]=ma[1][1]/det;
        ma[0][1]=ma[0][1]/det*(-1);
        ma[1][0]=ma[1][0]/det*(-1);
        ma[1][1]=num/det;
        printf("逆行列は\n%5.1f%5.1f\n%5.1f%5.1f\nです。\n",ma[0][0],ma[0][1],ma[1][0],ma[1][1]);
    }
    return 0;
}