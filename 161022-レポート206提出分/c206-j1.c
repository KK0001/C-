#include <stdio.h>
//変数の宣言
int a[10];
//関数の定義
void Babble(void){
  //変数の宣言
    int i,tmp;
  //バブルソート
    for (i=0; i<10; ++i)
        for (int j=i+1; j<10; ++j)
            if (a[j] > a[i]) {
                tmp =  a[j];
                a[j] = a[i];
                a[i] = tmp;
          }
  //出力
    for(i=0;i<10;i++)
      printf("%d  ",a[i]);
    printf("\n");
}
//メイン関数
int main(void){
    //入力
    printf("入力された10個の数値を降順に並び替えます。\n");
    for(int i=0;i<10;i++)
    {
        printf("%d番目の数:",i+1);
        scanf("%d",&a[i]);
    }
    //バブルソート
    Babble();

    return 0;//プログラム終了
}
