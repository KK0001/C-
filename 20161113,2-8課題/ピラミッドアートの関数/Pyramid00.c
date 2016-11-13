#include<stdio.h>

void Pyramid(void){
	for (int i = 0; i<5; i++)
	{
		for (int j = 0; j<5 - (i + 1); j++)
			printf(" ");
		for (int k = 0; k<(i + 1) * 2 - 1; k++)
			printf("*");

		printf("\n");
	}
}

int main(void){
  printf("ピラミッドアートを描きます。\n");
  Pyramid();

	return 0;
}
