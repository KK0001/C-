#include<stdio.h>

int main(void)
{
	for (int i = 0; i<5; i++) //1�i���\�����Ă������[�v�i�����5�i�j
	{
		for (int j = 0; j<5 - (i + 1); j++) //�󔒕����̕\�����[�v
			printf(" ");
		for (int k = 0; k<(i + 1) * 2 - 1; k++) //*�����̕\�����[�v
			printf("*");

		printf("\n");//�i�Ƃ��ĕ\�����邽��1�i�����s�������ōs����
	}

	return 0;//�v���O�����I��

}