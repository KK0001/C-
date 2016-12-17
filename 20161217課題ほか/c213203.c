/*
演習問題３　つぎのようなgenfileを作成せよ。
>genfile file.txt test1 test2 test3

argv[1]で指定したファイルを生成する（上の例ではfile.txt）
argv[2], argv[3], argv[4]…の文字列を、そのファイルに格納する。
>cat file.txt
test1
test2
test3
>
*/

#include<stdio.h>

int main(int argc, char *argv[]) {

  //argv[1]をファイル名にする。
  FILE*file;
  file=fopen(argv[1],"w");

  //argv[i]の文字列をtxtファイルへ書き込み
  for(int i=0;i<argc-2;i++){
    //printf("argv[%d] = %s\n", i, argv[i+2]);
    fputs(argv[i+2],file);
    fputs("\n",file);
  }

  //ファイルを閉じる
  fclose(file);

  return 0;
}
