#include <stdio.h>

int main(void)
{
    int ans,num1,num2;
    num1 = 1;
    num2 = 2;

    printf("%d \n",2);
    printf("%d \n",1);

    for(;num1 + num2 <= 100;){
        ans = num1 + num2;
        printf("%d \n",ans);
        num2 = num1;
        num1 = ans;
    }

    return 0;

}

