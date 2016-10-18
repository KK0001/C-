#include<stdio.h>

void buy(void)
{
    printf("車を買いました。\n");
}

int main(void)
{
    buy();
    printf("もう1台買いました。\n");
    buy();


    return 0;
}