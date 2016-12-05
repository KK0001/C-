#include<stdio.h>

//構造体
typedef struct number{
  int num1;
  int num2;
}number;

void oddnumin(number*odd);//入力
void oddnumout(number odd);//出力

//メイン関数
int main(void){
  number odd={0,0};//変数の宣言、初期化

  oddnumin(&odd);//入力
  oddnumout(odd);//出力

  return 0;
}

//2整数の入力
void oddnumin(number*odd){
  printf("整数01を入力:");
  scanf("%d",&odd->num1);
  printf("整数01より大きい整数02を入力:");
  scanf("%d",&odd->num2);
}

//2整数間の奇数の算出、出力
void oddnumout(number odd){
  printf("%dと%dの間に存在する奇数を表示します。\n",odd.num1,odd.num2);

  //奇数を出力
  int i=odd.num1;
  while(i<=odd.num2)
  {
      if(i%2)
          printf("%d\n",i);
      i++;
  }
}
