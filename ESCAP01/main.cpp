#include<stdio.h>
int main(void)
{
    int x;
    x = getchar();

    switch(x){
        case'a':
            printf("aが入力されました\n");
            break;
        case'b':printf("bが入力されました\n");
            break;
        case'c':printf("cが入力されました\n");
            break;
        default:printf("a,b,c以外が入力されました\n");
            break;
    }

    return 0;
}