#include<stdio.h>
#include<math.h>

int main(void)
{
    //変数の宣言
    double s,c,t;//三角関数
    double x,rad;//角度系

    //表示
    printf("xが0度から90度までのsinx,cosx,tanxを表示します。\n");

    //繰り返し
    for(x=0;x<=90;++x)
    {
        rad=x/180*M_PI;//ラジアンに変換

        //三角関数
        s = sin(rad);
        c = cos(rad);
        t = tan(rad);

        //90度ではtanxが定義出来ないので分岐される
        if(x==90)
            printf("x=%.0f,sinx=%.3f,cosx=%.3f,tanxは定義出来ません。",x,s,c);
        else
        {
            printf("x=%.0f,sinx=%.3f,cosx=%.3f,tanx=%.3f\n",x,s,c,t);
        }
    }

    return 0;//プログラム終了
}


