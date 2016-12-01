#include<stdio.h>

//関数の宣言
void ary_copy(char*d,char*s,int t);

//メイン関数
int main(void){
  char*arr1="Hello";
  char arr2[256];

  ary_copy(arr1,arr2,256);

  printf("%s\n",arr2);

  return 0;
}

//関数の定義
void ary_copy(char*d,char*s,int t){
  for(t=0;*(d+t);t++)
    (*s++) = (*d++);
}
