#include<stdio.h>
int main(void)
{

	while (1)//�������J��Ԃ��B
	{

	//�ϐ��̐錾
	int n;//���͂���l
	int i;//�J��Ԃ��̔}��
	int x =1;//�K��̒l


	//���͕���
	printf("���͂��ꂽ�ln�̊K����v�Z���܂��B\nn��");
	scanf_s("%d",&n);

	//�ȉ��A����
	if(n > 0)//n�����̂Ƃ�
	{
	 	for (i = 1;i <= n;++i)
	 	{
			x *= i;
		}
		printf("�u%d�v�̊K��́u%d�v�ł��B",n,x);

		continue;//���while(1)�܂Ŗ߂�B
	}
	

	else//n�����łȂ��Ƃ�
	{
		printf("�v�Z�ł��܂���B\n");

		break;//�����I���B
	}
	
	}

	return 0;//�v���O�����I��
}