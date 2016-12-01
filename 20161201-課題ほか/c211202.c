#include <stdio.h>

void  str_concat(char*d,char*s1,char*s2);

//メイン関数
int main(void)
{
    char*ptr1="Hello,";
    char*ptr2="World.";
    char test[100];

    str_concat(test,ptr1,ptr2);
    printf("%s\n",test);

    return 0;
}

//関数の定義
void  str_concat(char*d,char*s1,char*s2)
{
    while (((*d++) = (*s1++)) != '\0')
        ;
    d--;
    while (((*d++) = (*s2++)) != '\0')
        ;
}
