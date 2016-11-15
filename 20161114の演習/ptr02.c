#include<stdio.h>

int main(void)
{
  int x, y, z ;
  int* px=&x; int* py=&y; int* pz=&z;
  x=y=10;
  y++;
  z=x-y;

  printf("%d\n",z);



  return 0;
}
