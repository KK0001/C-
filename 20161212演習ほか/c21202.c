#include<stdio.h>
/*
typedef struct Score{
  int eng:
  int math;
}Score;

int main(void){
  Score taro;
  taro.eng=60;
  taro.math=90;
}
*/


typedef struct Score{
  int eng;
  int math;
}Score;

void fct1(Score* ptr, int e, int m){
  ptr->eng=e;
  ptr->math=m;
}

int main(void){
  Score taro;
  fct1(&taro,60,90);
  printf("%d,%d\n",taro.eng,taro.math);
}
