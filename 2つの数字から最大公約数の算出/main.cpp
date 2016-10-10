#include <stdio.h>

int main(void)
{
  //変数の宣言
  int a, b, c, tmp;

  //入力
  printf("2つの自然数を入力してください。\n");
  printf("1つ目の自然数→");
  scanf("%d", &a);
  printf("2つ目の自然数→");
  scanf("%d", &b);

  //aとbを入れ替え(a>bを常に成立させたい)
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }

  //ユークリッドの互除法を用いて算出
  c = a % b;
  while(c!=0){
    a = b;
    b = c;
    c = a % b;
  }

  //出力
  printf("最大公約数 = %d\n", b);

  return 0;//プログラム終了
}
