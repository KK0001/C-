#include<stdio.h>

int sum_array(int*ptr,int n);

int main(void){
  int x[5]={1,2,3,4,5};
  int ans=sum_array(x,5);

  printf("%d\n",ans);

  return 0;
}

int sum_array(int*ptr,int n){
  int sum;
  for(int i=0;i<n;i++)
    sum+=*(ptr+i);
  return sum;
}
