#include<stdio.h>
#include"GCD.h"

int main(void){
  int a,b;


  printf("2つの整数a,bを入力。\na:");
  scanf("%d",&a);
  printf("b:");
  scanf("%d",&b);

  int c=GCD(a,b);//最大公約数
  printf("%dと%dの最大公約数は、%d\n",a,b,c);
    
    

}
