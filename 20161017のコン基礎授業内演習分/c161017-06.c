#include<stdio.h>

float dpart(double x)
{
  return (x-(int)x);
}

int main(void){
  double dnum;
  printf("実数を入力してください:");
  scanf("%lf",&dnum);
  printf("%fの小数部分は%f\n", dnum, dpart(dnum));
  return 0;
}
