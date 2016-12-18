/*演習問題２　キーボードから２６以下の正整数を入力させ、malloc関数で必要なだけ確保したメモリ領域に、
’a’からはじまるアルファベット列を整数個数格納し、最後をヌル文字で終端し、
その文字列を表示するプログラムを書け。*/

#include<stdio.h>
#include<stdlib.h>

int main(void){


  //変数
  char*str;
  char str1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
    'o','p','q','r','s','t','u','v','w','x','y','z'};
  int num,i;

  //入力
  printf("26以下の整数を入力:");
  scanf("%d",&num);

  //malloc(num+1文字分のメモリを確保)
  str=(char*)malloc(sizeof(char)*(num+1));

  //文字列を生成
  for(i=0;i<num;i++)
    *(str+1)='a';

  *(str+num)='';
  printf("%sを用意しました。\n",str);

  //free
  free(str);

  return 0;
}
