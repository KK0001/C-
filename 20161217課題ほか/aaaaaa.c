#include<stdio.h>
#include<stdlib.h>

int main(void){
  char*str;
  int num,i;

  printf("何文字のaを用意しますか？\n→");
  scanf("%d",&num);

  str=(char*)malloc(sizeof(char)*(num+1));

  for(i=0;i<num;i++)
    *(str+1)='a';

  *(str+num)='';
  printf("%sを用意しました。\n",str);

  free(str);

  return 0;
}
