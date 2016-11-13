#include<stdio.h>

void CT00(int x,int y){

  int t = y / 2 - x;
  int k = x - t;

  if (t<=0 || k<=0 || y % 2 != 0) printf("計算できない組み合わせです。\n");
  else printf("亀が%d匹、鶴が%d匹です。\n", k, t);
}
