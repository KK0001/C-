#include <stdio.h>

int main(int argc, char *argv[]) {
// int argcは引数の個数 char *argv[]は引数の文字列を指すポインタ型配列
// printf("引数の個数は%d個です。\n", argc-1);
// こんな感じで引数の個数わかります
//printf("%s\n", argv[1]);
//これでファイル名が拾えます

  FILE *text1;
  FILE *text2;
  FILE *text3;

  char t1;

  text1=fopen("test1.txt","r");
  while((fgets(&t1, 1000, text1))!=NULL) {
    printf("%c", t1);
  }

  printf("\n");
  fclose(text1);

  return 0;
}
