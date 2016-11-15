#include<stdio.h>

void fct(void){
  int x;
  printf("%p\n",&x);
}

void fct2(void){
  int y;
  printf("%p\n",&y);
}

int main(void){
  fct();
  fct2();
}
/*
xとyはともにローカル変数であり、関数内でのみ
変数として有効である。従って、fct()の終始にてこの関数
用のメモリが確保され関数が終了されると確保されたメモリは
殻となる。次にfct2()が行われ、先程確保されたメモリが
受け継がれて使用される。
*/
