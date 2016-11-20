#include<stdio.h>

void inc(int*n1);

int main(void){
  int a=10;
  inc(&a);

  printf("%d\n",a);

  return 0;
}

void inc(int*n1){
  *n1=*n1+1;
}
