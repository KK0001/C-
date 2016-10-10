#include<stdio.h>
int main(void)
{
    //変数の宣言
    double dnum1,dnum2,dnum3;

    //表示（誘導）
    printf("「(dnum1*dnum2*dnum3)/(dnum1+dnum2+dnum3)」を出力します。\n");
    printf("dnum1,dnum2,dnum3,を入力して下さい。\n");

    //入力部分
    printf("dnum1→");
    scanf("%lf",&dnum1);
    printf("num1→");
    scanf("%lf",&dnum2);
    printf("dnum2→");
    scanf("%lf",&dnum3);

    //演算
    double n1=(dnum1*dnum2*dnum3)/(dnum1+dnum2+dnum3);

    //出力
    printf("%.3f",n1);

    //プログラム終了
    return 0;
}
