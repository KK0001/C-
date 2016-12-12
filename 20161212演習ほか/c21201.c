#include<stdio.h>
/*
typedef struct Score{
  int eng;
  int math;
}Score;

int main(void){
  Score taro;
  taro.eng=60;
  taro.math=90;
  printf("%d,%d\n",taro.eng,taro.math);
}
*/


typedef struct Score{
  int eng;
  int math;
}Score;

int main(void){
  Score taro;
  Score* ptr=&taro;
  taro.eng=60;
  taro.math=90;
  printf("%d,%d\n",taro.eng,taro.math);
}
