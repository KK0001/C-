/*テキストファイルを指定して、エイリアスファイルを作成。*/

#include<stdio.h>

int main(int argc,char*argv[]){

    //argv[1]のファイルを指定
    FILE*file1;
    file1=fopen(argv[1],"r");

    //argv[2]のファイルを作成
    FILE*file2;
    file2=fopen(argv[2],"w");

    //argv[1]のファイルを読み込む。
    char buf1[256];
    while((fgets(buf1,256,file1))!=NULL){
      printf("%c",*buf1);
      fputs(buf1,file2);
    }

    //ファイルを閉じる
    fclose(file1);
    fclose(file2);

    return 0;
}
