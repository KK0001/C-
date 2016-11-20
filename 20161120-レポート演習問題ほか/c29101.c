#include<stdio.h>

void plus7(int num1,int*result);

int main(void){
  int a,ans;
  printf("整数を入力:");
  scanf("%d",&a);

  plus7(a,&ans);
  printf("%d\n",ans);

  return 0;
}

void plus7(int num1,int*result){
  *result=num1+7;
}
