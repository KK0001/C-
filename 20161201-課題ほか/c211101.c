#include<stdio.h>

//関数の宣言
void averarr1(int*a1,int*a2,int*a3,int*a4,int n);

//メイン関数
int main(void){
  int a[5]={1,2,3,4,5};
  int b[5]={3,2,6,5,7};
  int c[5]={5,7,9,3,2};
  int x[5];

  averarr1(a,b,c,x,5);
  for(int i=0;i<5;i++)
    printf("%d ",x[i]);
  printf("\n");

  return 0;
}

//関数の定義
void averarr1(int*a1,int*a2,int*a3,int*a4,int n){
  for(int i=0;i<n;i++)
    *(a4+i)=(*(a1+i)+*(a2+i)+*(a3+i))/3;
}
