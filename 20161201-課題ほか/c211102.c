#include<stdio.h>

//関数の宣言
void  str_concat2(char*d,char*s1,char*s2);

//メイン関数
int main(void)
{
    char*ptr1="ファッ";
    char*ptr2="桃源郷";
    char test[100];

    str_concat2(test,ptr1,ptr2);
    printf("%s\n",test);

    return 0;
}

//関数の定義
void  str_concat2(char*d,char*s1,char*s2)
{
    char*s3="として";
    while (((*d++) = (*s1++)) != '\0')
        ;
    d--;
    while (((*d++) = (*s3++)) != '\0')
        ;
    d--;
    while (((*d++) = (*s2++)) != '\0')
        ;
}
