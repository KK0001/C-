#include <stdio.h>
int main(void)
{

    int num;


    printf("10以下または20以上の数を入力してください。\n→ ");
    scanf("%d", &num);

    if ( num <= 10 || num >= 20 )
        printf("「%d」は、10以下または20以上です。\n",num);
    else
        printf("条件を満たしていません。\n");

    return 0;
}


