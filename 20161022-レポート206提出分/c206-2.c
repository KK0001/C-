#include <stdio.h>

//関数の定義
int lowest(int x){
    return x%10;
}

//メイン関数
int main(void){

    //変数の宣言
    int num1;

    //入力
    printf("整数xを入力して下さい。\n");
    printf("x:");
    scanf("%d",&num1);

    //出力
    printf("xの10進での1桁目:");
    printf("%d\n",lowest(num1));

    return 0;//終了
}
