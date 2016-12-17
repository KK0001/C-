/*入力した整数をファイルへ書き込みます。*/

#include<stdio.h>

int main(void){

  //変数
  int num;
	FILE *file;
	file = fopen("num.txt","w");

  //入力
  printf("整数を入力:");
  scanf("%d",&num);
	fprintf(file,"%d",num);
	fclose(file);
	return 0;
}
