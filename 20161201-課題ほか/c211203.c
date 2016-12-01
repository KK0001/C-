#include<stdio.h>

//関数の宣言
int*max_element(int*ptr,int n);

//メイン関数
int main(void){
  int i=5;
  int x[5]={1,2,3,4,5};
  int*ptr;

  ptr=max_element(x,5);
  printf("%d\n",*ptr);

  return 0;
}

//関数の定義
int*max_element(int*ptr, int n){
  int*max;
  for(int i=0;i<n;i++) {
      if (*(ptr+i) > *max) {
          *max = *(ptr+i);
      }
  }

  return max;
}
