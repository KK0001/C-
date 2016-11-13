#include<stdio.h>
#include"Prime.h"

int main(void)
{
  int num1;

  //入力
  printf("整数を入力:");
  scanf("%d",&num1);

  //出力
  int a=Prime(num1);
  printf("%d\n",a);

  return 0;
}
