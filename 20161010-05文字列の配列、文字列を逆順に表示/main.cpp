#include<stdio.h>
int main(void)
{
    char a[256];
    int i,l=0;

    printf("文字列を入力:");
    scanf("%s",a);

    for (i = 0;a[i];i++)
        l++;

    for (i=l-1;i>=0;i--)
        printf("%c", a[i]);

    printf("\n");

    return 0;
}
