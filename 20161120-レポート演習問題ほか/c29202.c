#include<stdio.h>

void mqr(int n1,int n2,int*mul,int*qut,int*res);

int main(void){
  int a=10,b=3,x,y,z;
  mqr(a,b,&x,&y,&z);

  printf("%d,%d,%d\n",x,y,z);

  return 0;
}

void mqr(int n1,int n2,int*mul,int*qut,int*res){
  *mul=n1*n2;
  *qut=n1/n2;
  *res=n1%n2;
}
