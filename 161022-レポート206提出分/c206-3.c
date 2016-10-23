#include <stdio.h>

//関数の定義
double avrg(double x,double y,double z){
    return (x+y+z)/3;
}

//メイン関数
int main(void){

    //変数の宣言
    double num1;
    double num2;
    double num3;

    //入力
    printf("3つの数x,y,zを入力して下さい。\n");
    printf("x:");
    scanf("%lf",&num1);
    printf("y:");
    scanf("%lf",&num2);
    printf("z:");
    scanf("%lf",&num3);

    //出力
    printf("x,y,zの平均値:");
    printf("%f\n",avrg(num1,num2,num3));

    return 0;//終了
}
