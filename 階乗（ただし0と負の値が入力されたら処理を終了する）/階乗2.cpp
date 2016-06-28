#include<stdio.h>
int main(void)
{

	while (1)//処理を繰り返す。
	{

	//変数の宣言
	int n;//入力する値
	int i;//繰り返しの媒体
	int x =1;//階乗の値


	//入力部分
	printf("入力された値nの階乗を計算します。\nn→");
	scanf_s("%d",&n);

	//以下、分岐
	if(n > 0)//nが正のとき
	{
	 	for (i = 1;i <= n;++i)
	 	{
			x *= i;
		}
		printf("「%d」の階乗は「%d」です。",n,x);

		continue;//上のwhile(1)まで戻る。
	}
	

	else//nが正でないとき
	{
		printf("計算できません。\n");

		break;//処理終了。
	}
	
	}

	return 0;//プログラム終了
}