#include<stdio.h>
int main(void)
{
int a[10];
for(int i = 0;i<10;i++)
    scanf("%d",&a[i]);
int x = 0;
for(int j = 0;j<10;j++)
    x += a[j];
float heikin = x/10;
printf("%f",heikin);

return 0;
}