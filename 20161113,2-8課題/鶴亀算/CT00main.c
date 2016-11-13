#include<stdio.h>
#include"CT00.h"

int main(void)
{

	int head, leg;
	printf("鶴亀算を行います。\n");
	printf("頭の数:");
	scanf("%d", &head);
	printf("足の数:");
	scanf("%d", &leg);

	CT00(head,leg);
	
	return 0;
}
