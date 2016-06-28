#include <stdio.h>

int main(void)
{

	// 変数の宣言
	int x= 1;//階乗
	double napier = 1.0;//e（ネイピア）

	//級数の計算
	for (int i = 1;i<30;i++) {
		x *= i;
		napier += 1.0 / x;
	}

	//e（ネイピア）の表示
	printf("計算結果 e = %.5f\n", napier);

	return 0;//プログラム終了

}
