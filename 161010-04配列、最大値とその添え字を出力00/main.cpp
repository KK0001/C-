#include<stdio.h>
int main(void)
{
    //変数の宣言
    int num,a[256],max,SoeJi,i;

    //配列の長さ
    printf("配列の長さを入力:");
    scanf("%d",&num);

    //入力
    for(i=0;i<num;i++){
        printf("%d番目の数:",i+1);
        scanf("%d",&a[i]);
    }

    //最大値と添え字を特定
    for(i=1; i<=num; i++) {
        if (a[i] > max) {
            max = a[i];
            SoeJi = i;
        }
        else
            SoeJi=-1;
    }


    //出力
    printf("最大値:%d\nその添え字:%d\n",max,SoeJi);

    //終了
    return 0;
}
