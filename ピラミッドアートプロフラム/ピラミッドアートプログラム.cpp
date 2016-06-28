#include<stdio.h>

int main(void)
{
	for (int i = 0; i<5; i++) //1段ずつ構成していくループ（今回は5段）
	{
		for (int j = 0; j<5 - (i + 1); j++) //空白部分の表示ループ
			printf(" ");
		for (int k = 0; k<(i + 1) * 2 - 1; k++) //*部分の表示ループ
			printf("*");

		printf("\n");//段として表示するため1段ずつ改行がここで行われる
	}

	return 0;//プログラム終了

}