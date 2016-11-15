#include<stdio.h>

int sum(int num)
{
  int sum=0;
  for(int i=0; i<=num; i++){
    sum+=i;
  }
  return sum;
}

int main(void){
  int num1;

  printf("2以上の数を入力して下さい。→");
  scanf("%d",&num1);

  printf("1から%dまでの全ての整数の和は...\n→%d\n",num1,sum(num1));

  return 0;
}
