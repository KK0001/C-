#include <stdio.h>

//関数の定義
int get2(void){
    //変数の宣言
    int num;

    //入力
    printf("整数を入力して下さい。→");
    scanf("%d",&num);

    //2倍を返す
    return num*2;
}

//メイン関数
int main(void){
    //変数の宣言と関数の実行
    int ans=get2();

    //出力
    printf("2倍の数:%d\n",ans);

    //終了
    return 0;
}
