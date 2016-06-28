#include<stdio.h>

int main(void)
{
    printf("100円を50円,10円,5円,1円でくずすときのすべての組み合わせと,組み合わせ総数を算出します。\n");

    //変数の宣言
    int l;//50
    int m;//10
    int n;//5
    int o;//1
    int count=0;//組み合わせ総数

    //繰り返し
    printf("50 10 5 1\n");
    for(l=0;l<=2;l++)
    {
        for(m=0;m<=10;m++)
        {
            for(n=0;n<=20;n++)
            {
                for(o=0;o<=100;o++)
                {
                    if(50*l+10*m+5*n+1*o==100)
                    {
                        ++count;//総数を数える

                        //結果出力
                        printf("%d　%d　%d　%d\n", l, m, n, o);
                    }
                }
            }
        }
    }

    //総数の出力
    printf("組み合わせ総数は%dです。\n",count);

    return 0;//プログラム終了
}
