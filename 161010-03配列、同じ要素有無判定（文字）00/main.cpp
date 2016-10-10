#include <stdio.h>
int main(void)
{
    int num,flag=0;
    char a[256];

    printf("配列の長さ:");
    scanf("%d",&num);

    for(int i=0;i<num;i++){
        printf("%d番目の文字:",i+1);
        scanf("%s",&a[i]);
    }

    for(int t=0;t<num-1;t++){
        for(int s=t+1;s<num;s++){
            if(a[t]==a[s])
                flag =1;

        }

    }

    if(flag==1)
        printf("同じ文字が収納されています。\n");
    else
        printf("同じ文字は収納されていません。\n");


    return 0;
}


