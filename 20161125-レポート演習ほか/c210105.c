#include<stdio.h>

//関数の宣言
int Pow2(int*x,int*y);

//メイン関数
int main(void){
  int a,b;
  a=10;

  //関数呼び出し
  Pow2(&a,&b);

  //出力
  printf("%d\n",b);

  return 0;
}

//関数の定義
int Pow2(int*x,int*y){
  //2乗
  *y=(*x)*(*x);

  return *y;
}
