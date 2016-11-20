#include<stdio.h>

//関数の宣言
void sort3(int*n1, int*n2, int*n3);

int main(void)
{
  int a=3; int b=10; int c=2;

  //ソート
  sort3(&a,&b,&c);

  //出力
  printf("%d,%d,%d\n",a,b,c);

  return 0;
}

//関数の定義
void sort3(int*n1, int*n2, int*n3){
int n[3]={*n1,*n2,*n3};
int tmp;

 for (int i=0; i<3; ++i)
  for (int j=i+1; j<3; ++j) {
   if (n[i] > n[j]) {
     tmp =  n[i];
     n[i] = n[j];
     n[j] = tmp;
   }
 }

 *n1=n[0],*n2=n[1],*n3=n[2];
}
