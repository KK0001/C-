
#include <stdio.h>

int main(void){
    int point;
    char ans;

    /*評点の入力*/
    printf("評点を入力してください。単位取得なら'Y'、そうでなければ'N'が表示されます。 \n");
    printf("評点:");
    scanf("%d",&point);

    if (60 <= point){
        ans = 'H';
    }
    else{
        ans = 'N';
    }

    /*結果の表示*/
    printf("%c \n",ans);

    return 0;
}