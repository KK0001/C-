#include<stdio.h>

//関数の宣言
void prnum(int*x);

//メイン関数
int main(void){
  int z=10;

  //関数呼び出し
  prnum(&z);

  return 0;
}

//関数の定義
void prnum(int*x){

  //入力した数をデクリメントしながら表示
  for(int i=*x;i>0;i--)
    printf("%d ",i);
  printf("\n");
}
