int Prime(int x){
  int swi = 0;
  int a;

  for(int i=2;i<x;++i)
    if(x%i==0){
        swi = 1;
        break;
      }

  if(swi == 0) a=1;
  else a=0;

  return a;
}
