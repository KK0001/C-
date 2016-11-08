#include<stdio.h>
#include"sum01.h"
#include"dif01.h"

int main(void)
{
  int num1,num2,s,d;
  printf("2つの整数x,yを入力。\nx:");
  scanf("%d",&num1);
  printf("y:");
  scanf("%d",&num2);

  s=sum(num1,num2);
  d=dif(num1,num2);

  printf("和:%d\n差:%d\n",s,d);

  return 0;
}
