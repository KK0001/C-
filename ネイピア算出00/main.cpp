#include <stdio.h>
int main(void)
{
    //変数の宣言
    int x= 1;
    double napier = 1.0;

    //算出部分
    for (int i = 1;i<30;i++) {
        x *= i;
        napier += 1.0 / x;
    }

    //ネイピア数の表示
    printf("ネイピア数:e = %.5f\n", napier);

    //プログラム終了
    return 0;
}

