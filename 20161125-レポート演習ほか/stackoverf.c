#include<stdio.h>
#include<stdlib.h>
/* int i;*/
void excode(void){
  printf("攻撃コード！¥n");
  exit(0);
}
void fct(void){
 int x[1]={0};
 int i;
 for(i=1;i<5;i++)
 x[i]=(int)excode;
}
int main(void){
 fct();
}
