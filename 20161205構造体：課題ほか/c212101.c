/*
演習問題１　年齢、身長、体重のメンバからなる構造体Personを考え、
各メンバに値をキーボードより入力させる関数pin、画面上に出力する関数poutを作成せよ。
それぞれの頭部は以下の通りする。
　　void pin(Person* ptr)
　　void pout(Person p)
*/

#include<stdio.h>

//構造体
typedef struct Person{
  int old;//年齢
  double height;//身長
  double weight;//体重
} Person;

void pin(Person*ptr);//入力
void pout(Person p);//出力

//main関数
int main(void){
  Person p={0,0,0};//初期化
  pin(&p);//入力
  pout(p);//出力

  return 0;
}

//入力する関数
void pin(Person*ptr){
  printf("年齢(入力):");
  scanf("%d",&ptr->old);
  printf("身長（入力）:");
  scanf("%lf",&ptr->height);
  printf("体重(入力):");
  scanf("%lf",&ptr->weight);
}

//出力する関数
void pout(Person p){
  printf("年齢:%d:\n身長:%.1f\n体重:%.1f\n",p.old,p.height,p.weight);
}
