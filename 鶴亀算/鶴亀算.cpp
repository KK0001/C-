#include<stdio.h>
int main(void)
{

	int head, leg;//頭と足
	int t, k;//鶴と亀
	printf("数値を入力してください。\n");
	//数値の入力
	printf("頭の数→");
	scanf_s("%d", &head);
	printf_s("足の数→");
	scanf_s("%d", &leg);
	t = leg / 2 - head;//鶴の数
	k = head - t;//亀の数
	if (t<=0 || k<=0 || leg % 2 != 0)//足の数が偶数でない,または鶴と亀が1匹ずついないとき
		printf("計算できません。\n");
	}
	else//足の数が偶数で,鶴と亀が1匹ずついるとき
	{

		printf("亀が%d匹、鶴が%d匹である。\n", k, t);
	}
	return 0;
}