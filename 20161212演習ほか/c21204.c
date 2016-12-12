#include<stdio.h>
/*
typedef struct Score{
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

void fct2(Score* ptr1, Score *ptr2){
  Score tmp;
while(*ptr1++ = *ptr2++)　;
}

int main(void){
  Score taro ={60, 90}, jiro={0,0};
  fct2(&taro,&jiro);
  printf("%d",jiro.math);
}
