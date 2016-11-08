#include<stdio.h>
int yPower(int x,int y)
{
  int ans=1;

  for(int i=0;i<y;i++)
    ans=ans*x;

    return ans;
}

int main(void)
{
  int num1,num2,answer;

  printf("整数xとyを入力。\nx:");
  scanf("%d",&num1);
  printf("y:");
  scanf("%d",&num2);

  answer=yPower(num1,num2);
  printf("%d\n",answer);

  return 0;
}
