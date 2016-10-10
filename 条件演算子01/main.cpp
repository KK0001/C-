#include <stdio.h>

int main(void)
{
    //変数の宣言
    int num;
    char p;

    //入力部分
    printf("1+1= ");
    scanf("%d",&num);

    //条件演算子
    (num==2)?printf("正解〜！\n"):printf("不正解〜！\n");

    //プログラム終了
    return 0;
}

