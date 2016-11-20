#include<stdio.h>

  void yP(int x,int y,int*ans);

  int main(void){
    int a=3,b=10,power;

    yP(a,b,&power);

    printf("%d\n",power);

    return 0;
  }

  void yP(int x,int y,int*ans){
  int a=1;

  for(int i=0;i<y;i++)
    a=a*x;

  *ans=a;
}
