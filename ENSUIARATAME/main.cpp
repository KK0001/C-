#include <stdio.h>
#include<math.h>

int main(void)
{
    //変数の宣言
    double r,h,n;//円錐の半径,高さ,分割数
    double x,y,z;//計算部分で使う変数
    double V=0;//最終的な円錐の体積

    //入力部分
    printf("円錐の体積を計算します。\n");
    printf("円錐の底面の半径==>");
    scanf("%lf",&r);
    printf("円錐の高さ==>");
    scanf("%lf",&h);
    printf("分割数==>");
    scanf("%lf",&n);

    //計算部分
    for(int i=1;i<=n;++i)
    {
        x = r*(i-1)/n;
        y = h/n;
        z = x*x*M_PI*y;
        V += z;
    }

    //体積の出力部分
    printf("体積は「%.2f」です。",V);

    return 0;//プログラム終了
}



