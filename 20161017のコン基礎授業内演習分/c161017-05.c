#include <stdio.h>

int b,c;

void w2(int x){
  int i=0;
  b=x;

  while((b%2==0)&&(b!=0)){
  b/=2;
  i++; }
  c=i;
}

int main(void)
{
  int a;
  printf("整数:");
  scanf("%d",&a);

  w2(a);

  printf("整数%dは2で、%d回割れる ¥n",a,c);

}
