#include <stdio.h>
int main(void)
{
    //変数の宣言
    int num;

    //入力部分
    printf("2016年11月の日にちを入力せよ。 \n");
    printf("日にち: ");
    scanf("%d",&num);

    //条件分岐
    if (1 <= num && num <= 30){
        if (num % 7 == 0){
            printf("11月%d日は月曜日です。 \n",num);
        }
        else if (num % 7 == 1){
            printf("11月%d日は火曜日です。 \n",num);
        }
        else if (num % 7 == 2){
            printf("11月%d日は水曜日です。 \n",num);
        }
        else if (num % 7 == 3){
            printf("11月%d日は木曜日です。 \n",num);
        }
        else if (num % 7 == 4){
            printf("11月%d日は金曜日です。 \n",num);
        }
        else if (num % 7 == 5){
            printf("11月%d日は土曜日です。 \n",num);
        }
        else if (num % 7 == 6){
            printf("11月%d日は日曜日です。 \n",num);
        }
    }
    else{
        printf("%d日は11月にはありません。 \n",num);
    }

    //プログラム終了
    return 0;
}




