#include <stdio.h>
int main(void)
{
    //変数の宣言
    int num = 0;

    //繰り返し部分、表示部分
    for (;num<10;)
    {
        num++;
        printf("%d\n", num);
    }

    //プログラム終了
    return 0;
}

