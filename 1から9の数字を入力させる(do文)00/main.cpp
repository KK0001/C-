#include <stdio.h>
int main(void) {

    /*
    int x;

    do {
        printf("1以上9以下の数を入力してください\n");
        scanf("%d", &x);
    } while (x < 1 || x > 9);

    return 0;*/

    int x;
    printf("1以上９以下の数を入力してください\n");
    scanf("%d",x);

    for (x<1;x>9;) {
        printf("1以上９以下の数を入力してください\n");
        scanf("%d",x);
    }

    return 0;

/*
    int x;

    printf("1以上9以下の数を入力してください\n");
    scanf("%d",&x);
    while(x<1||x>9)
    {
        printf("1以上9以下の数を入力してください\n");
        scanf("%d",&x);
    }

    return 0;

*/


}