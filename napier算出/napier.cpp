#include <stdio.h>

int main(void)
{

	// �ϐ��̐錾
	int x= 1;//�K��
	double napier = 1.0;//e�i�l�C�s�A�j

	//�����̌v�Z
	for (int i = 1;i<30;i++) {
		x *= i;
		napier += 1.0 / x;
	}

	//e�i�l�C�s�A�j�̕\��
	printf("�v�Z���� e = %.5f\n", napier);

	return 0;//�v���O�����I��

}
