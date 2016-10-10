#include <stdio.h>
int main(void)
{
    //変数の宣言
    int ans,num1,num2;
    num1 = 1;
    num2 = 0;

    //フィボナッチの助走
    printf("%d \n",0);
    printf("%d \n",1);

    //算出部分
    for(;num1 + num2 <= 100;){
        ans = num1 + num2;
        printf("%d \n",ans);
        num2 = num1;
        num1 = ans;
    }

    //プログラム終了
    return 0;
}

