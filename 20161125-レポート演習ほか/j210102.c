#include<stdio.h>

//関数の宣言
int ment(int*x,int*y);

//メイン関数
int main(void){
  int a,b;

  printf("数を入力:");
  scanf("%d",&a);

  ment(&a,&b);
  printf("%d\n",b);

  return 0;
}

//関数の定義
int ment(int*x,int*y){
  if(*x>0)
    *y=*x+1;
  else if(*x<0)
    *y=*x-1;
  else
    *y=0;

  return *y;
}
