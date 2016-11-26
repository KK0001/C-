#include <stdio.h>

//関数の宣言
int Fibonacci(int*x,int*y);

//メイン関数
int main(void)
{
  int a,b;

  //入力
  printf("整数を入力:");
  scanf("%d",&a);

  //関数呼び出し
  Fibonacci(&a,&b);
  printf("%d\n",b);

  return 0;
}

//関数の定義
int Fibonacci(int*x,int*y){
  //フィボナッチ数の算出
  int num1=1,num2=0,ans;
  for(;num1 + num2 <= *x;){
      ans = num1 + num2;
      num2 = num1;
      num1 = ans;
  }
  *y=ans;
  return *y;
}
