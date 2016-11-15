#include<stdio.h>

int main(void){
  int x=10, y=20, tmp;
  int* px=&x;
  int* py=&y;
  tmp=*px;
  *px=*py;
  *y=tmp;

  return 0;
}
