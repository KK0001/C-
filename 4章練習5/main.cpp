#include<stdio.h>
int main(void)
{
    //変数の宣言
    int num[4];//入力した値の収納先
    int Total=0;//合計点
    double Average;//平均点

    //入力部分
    for(int i=0;i<=4;i++)//配列に値を収納、ループで5回入力
    {
        printf("科目%dの点数を入力してください。\n",i+1);
        scanf("%d",&num[i]);
    }

    //合計点の計算
    for(int i=0;i<=4;i++)//配列の中身を順にTotalに足していく
    {
        Total+=num[i];
    }

    /*平均点の計算、Totalにはキャスト演算子を使用。
       →doubel型に変換してから計算。*/
    Average = (double)Total / 5;

    //出力部分
    printf("5科目の合計点は%d点です。\n",Total);
    printf("5科目の平均点は%f です。\n",Average);

    //プログラム終了
    return 0;
}
