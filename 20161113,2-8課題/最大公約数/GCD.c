int GCD(int x,int y){

    int c, tmp;

    //aとbを入れ替え(a>bを常に成立させたい)
    if(x<y){
        tmp = x;
        x = y;
        y = tmp;
    }

    //ユークリッドの互除法
    c = x % y;
    for(;c!=0;){
        x = y;
        y = c;
        c = x % y;
    }

    return y;//最大公約数
}
