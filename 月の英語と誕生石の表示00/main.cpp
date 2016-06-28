#include <stdio.h>

int main(void)
{
    //変数の宣言
    char a[][256]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    char b[][256]={"ガーネット","アメシスト","アクアマリン","ダイヤモンド","エメラルド","真珠","ルビー","ペリドット","サファイア","トルマリン","シトリン","ラピスラズリ"};
    int mon;

    //入力部分
    printf("入力された月の英語のスペルと誕生石を表示します。\n");
    printf("何月ですか=>");
    scanf("%d",&mon);

    //出力部分
    printf("%d月のスペルは「%s」です。\n",mon,a[mon-1]);
    printf("誕生石は「%s」です。\n",b[mon-1]);

    return 0;//プログラム終了
}




