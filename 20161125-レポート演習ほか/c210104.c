#include<stdio.h>

//関数の宣言
int sum(int*x,int*y);

//メイン関数
int main(void){
  int a,b;
  a=10,b=5;

  //関数呼び出し
  sum(&a,&b);

  //出力
  printf("%d\n",a);

  return 0;
}

//関数の定義
int sum(int*x,int*y){
  *x=*x+*y;

  return *x;
}
