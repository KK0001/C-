#include<stdio.h>

int main(void)
{
  int i;
  char carray[12];
  int iarray[3];
  for(i=0;i<12;i++) printf("%p\n",&carray[i]);
  printf("\n");
  for(i=0;i<3;i++) printf("%p\n",&iarray[i]);

  return 0;
}
