#include<stdio.h>
int nibai(int x);
int sanbai(int x);

int main(void){
  int(*ptr[])()={nibai,sanbai};
  int num1,num2,ans;

  scanf("%d",&num1);
  scanf("%d",&num2);

  ans=(*ptr[num1-2])(num2);
  printf("%d\n",ans);

  return 0;
}

int nibai(int x){
  return x*2;
}

int sanbai(int x){
  return x*3;
}
