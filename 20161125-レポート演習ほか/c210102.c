#include<stdio.h>

//関数の宣言
int min(int*x,int*y,int*z);

//メイン関数
int main(void){
  int a,b;
  int c;
  a=10,b=5;

  //関数呼び出し
  c=min(&a,&b,&c);

  printf("%d\n",c);

  return 0;
}

//関数の定義
int min(int*x,int*y,int*z){

  //小さい方を収納
  if(*x<*y)
    *z=*x;
  else if(*x>*y)
    *z=*y;
  else
    *z=*x;

  return *z;
}
