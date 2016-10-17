#include <stdio.h>
int main(void)
{
    //変数の宣言
    char str1[3]={'t','d','u'};
    char str2[3];
    int i=0;

    //str1の出力
    while(str1[i]!=0) {
        printf("%c\n",str1[i]);
        i++;
    }

    printf("\n");

    ///コピー部分
    while(str1[i]!=0){
        str2[i] = str1[i];
        i++;
    }

    //str2の出力
    while(str2[i]!=0){
        printf("%c\n",str2[i]);
        i++;
    }

    //プログラム終了
    return 0;
}

