#include <stdio.h>

int c;
//関数:大きい方をcに収納
void Max(int x,int y)
{
  if ( x > y) c=x;
  else c=y;
}

//メイン関数
int main(void){
  int a,b;
  printf("整数A:");
  scanf("%d",&a);
  printf("整数B:");
  scanf("%d",&b);

  Max(a,b);

  printf("大きいほうは%d\n",c);

}
