#include<stdio.h>
#include "ql01.h"

int main(void)
{
 double num1,num2,ans;
 printf("数xとyを入力。\nx:");
 scanf("%lf",&num1);
 printf("y:");
 scanf("%lf",&num2);

if((num1==0)||(num2==0))
  ans=0;
else
 ans=qlarger(num1,num2);

printf("%f\n",ans);

return 0;
}
