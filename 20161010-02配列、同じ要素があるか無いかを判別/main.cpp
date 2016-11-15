#include<stdio.h>
int main(void)
{
    //変数の宣言
    int num,a[256],flag=0;

    //配列の長さ
    printf("配列の長さを入力:");
    scanf("%d",&num);

    //入力
    for(int i=0;i<num;i++){
        printf("%d番目の数:",i+1);
        scanf("%d",&a[i]);
    }

    //判定
    for(int t=0;t<num-1;t++)
        for(int s=t+1;s<num;s++)
            if(a[t]==a[s])
                flag =1;


    //条件分岐（出力）
    if(flag==1)
        printf("同じ数が収納されています。\n");
    else
        printf("同じ数は収納されていません。\n");

    //プログラム終了
    return 0;
}

