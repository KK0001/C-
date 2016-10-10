#include <stdio.h>

int main(void)
{
//変数の宣言
    int num;//入力する数値
    int i;//繰り返しの媒体
    int swi = 0;//判定媒体

    //入力部分
    printf("入力された正の整数が素数か否かを判別します。\n自然数を入力して下さい。\n");
    printf("正の整数→");
    scanf("%d",&num);

//判定部分

    if(num==1)
        printf("素数ではありません。\n");
    else if(num<=0)
        printf("正の整数を入力して下さい。\n");
    else {
        for (i = 2; i < num; ++i) {
            printf("%dループ目: %d/%d = %d 余り%d\n",i-1,num,i,num/i,num%i);//変数の変化を観測
            if (num % i == 0) {
                swi = 1;
                break;
            }
        }


//出力
        if (swi == 0)printf("素数です。\n");
        else printf("素数ではありません。\n");
    }

    return 0;

}
