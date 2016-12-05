#include<stdio.h>

//構造体
typedef struct Person{
  double height;//身長
  double weight;//体重
} Person;

void BMI(Person p);//BMI算出、出力

//main関数
int main(void){
  Person p={171.5,60};//身長171.5cm、体重60kgとする。
  BMI(p);//出力

  return 0;
}

//出力する関数
void BMI(Person p){
  double a=p.weight;
  double b=p.height/100;
  float BMI=a/(b*b);
  printf("身長が%.1f、体重が%.1fのとき、\n",p.height,p.weight);
  printf("BMIは「%.1f」です。",BMI);

  if(BMI<18.5) printf("痩せています。");
  else if(18.5<=BMI&&BMI<25) printf("普通です。");
  else if(25<=BMI&&BMI<35) printf("少し太っています。");
  else if(35<=BMI) printf("太っています。");

  printf("\n");
}
