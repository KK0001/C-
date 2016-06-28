#include <stdio.h>

int main(void)
{
//変数の宣言
int num;//入力する数値
int i;//繰り返しの媒体
int swi = 0;//判定媒体

 //入力部分
printf("入力された自然数が素数か否かを判別します。\n自然数を入力して下さい。\n");
    printf("自然数→");
    scanf("%d",&num);

//判定部分
for(i=2;i<num;++i)
    {
if(num%i==0)
        {
            swi = 1;
break;
        }
    }

//出力
if(swi == 0)printf("素数です。\n");
else printf("素数ではありません。\n");

return 0;

}