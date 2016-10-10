#include <stdio.h>
int main(void)
{
    int x;

    while(1)
    {

        printf("数を入力して下さい: ");
        scanf("%d",&x);

        if(x==0)
            break;

        else if(x>0)
        {
            for(int i=x;i<=0;--i)
                printf("%d\n",i);
            continue;
        }
        else if(x<0)
        {
            for(int j=-x;j<=0;--j)
                printf("%d\n",-j);
            continue;
        }
    }

   return 0;
}