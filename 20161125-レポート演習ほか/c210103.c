#include<stdio.h>

//関数の宣言
int sum(int*x,int*y,int*z);

//メイン関数
int main(void){
  int a,b;
  int c;
  a=10,b=5;
  c=sum(&a,&b,&c);

  printf("%d\n",c);

  return 0;
}

//関数の定義
int sum(int*x,int*y,int*z){
  *z=*x+*y;

  return *z;
}
