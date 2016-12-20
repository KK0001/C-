#include<stdio.h>
#include<stdlib.h>

int main(void){
    char *str;
    int num,i;

    printf("何文字のアルファベット列を用意しますか:");
    scanf("%d",&num);

    for(;num > 26;){
        printf("26以下の正整数を入力してください:");
        scanf("%d",&num);
    }

    str = (char *) malloc (sizeof(char) * (num+1));
    if(!str){
        printf("メモリが確保できませんでした\n");
        return 1;
    }

    for(i=0;i < num;i++){
        *(str+i) = 97+i;//ASCIIコードで収納していく。
    }

    printf("%s\n",str);

    free(str);

    return 0;
}
