#include <stdio.h>

//関数の定義
int multi(int x,int y){
    return x*y;
}

//メイン関数
int main(void){

    //変数の宣言
    int num1;
    int num2;

    //入力
    printf("整数x,yを入力して下さい。\n");
    printf("x:");
    scanf("%d",&num1);
    printf("y:");
    scanf("%d",&num2);

    //出力
    printf("x*y=");
    printf("%d\n",multi(num1,num2));

    return 0;//終了
}
