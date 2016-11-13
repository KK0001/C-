#include <stdio.h>

void func(void)
{
    static int x= 1;//staticな変数です。

    x++;//インクリメントです。
    printf("%d\n",x);
    return;
}

int main(void)
{
    //複数回呼び出します。(今回は6回)
    func();
    func();
    func();
    func();
    func();
    func();

    return 0;
}
