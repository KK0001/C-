#include<stdio.h>
int main(void)
{

	int head, leg;//���Ƒ�
	int t, k;//�߂ƋT
	printf("���l����͂��Ă��������B\n");
	//���l�̓���
	printf("���̐���");
	scanf_s("%d", &head);
	printf_s("���̐���");
	scanf_s("%d", &leg);
	t = leg / 2 - head;//�߂̐�
	k = head - t;//�T�̐�
	if (t<=0 || k<=0 || leg % 2 != 0)//���̐��������łȂ�,�܂��͒߂ƋT��1�C�����Ȃ��Ƃ�
		printf("�v�Z�ł��܂���B\n");
	}
	else//���̐���������,�߂ƋT��1�C������Ƃ�
	{

		printf("�T��%d�C�A�߂�%d�C�ł���B\n", k, t);
	}
	return 0;
}