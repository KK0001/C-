#include<stdio.h>

int Power(int num)
{
  return (num*num*num*num*num);
}

int main(void)
{
  int num1,ans;
  printf("整数を入力:");
  scanf("%d",&num1);
  ans=Power(num1);
  printf("5乗:%d\n",ans);

  return 0;
}
