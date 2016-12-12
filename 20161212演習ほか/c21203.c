#include<stdio.h>

/*typedef struct Score{
  int eng;
  int math;
} Score;

int main(void){
  Score taro ={60, 90}, jiro={0,0}, tmp;
  tmp=taro;
  taro=jiro;
  jiro=tmp;
}
*/

typedef struct Score{
  int eng;
  int math;
}Score;

int main(void){
  Score taro ={60, 90}, jiro={0,0}, tmp;
  Score* tptr=&taro;
  Score* jptr=&jiro;

  tmp=*tptr;
  tptr=jptr;
  jptr=&tmp;
  printf("%d,%d",tptr->math,jptr->math);
}
