#include <stdio.h>
int main(void)
{
    int num;
    int re=0;

    printf("非負の整数を入力: ");
    scanf("%d", &num);

    while (num > 0) {
        re = re * 10 + num % 10;
        num /= 10;
    }

    printf("%d\n", re);

    return 0;
}
