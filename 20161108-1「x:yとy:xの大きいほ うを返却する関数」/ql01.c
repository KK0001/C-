double qlarger(double x,double y)
{
  double ans;
  if(x/y>y/x)
    ans=x/y;
  else
    ans=y/x;

  return ans;
}
