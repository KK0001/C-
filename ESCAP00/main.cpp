#include<stdio.h>
int main(void)
{
    int x;
    x = getchar();

    if(x=='a')
        printf("aが入力されました。\n");

    else if(x=='b')
        printf("bが入力されました。\n");

    else if(x=='c')
        printf("cが入力されました。\n");

    else
        printf("a,b,cを入力してください。n");

    return 0;
}