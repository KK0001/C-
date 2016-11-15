#include<stdio.h>

int main(void){
  int x=10, y=12;
  int* ptr;
  ptr=&x;
  (*ptr)++;
  ptr=&y;
  (*ptr)--;

  printf("%d,%d\n",x,y);

  return 0;
}
