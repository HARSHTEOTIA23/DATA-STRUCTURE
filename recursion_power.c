#include<stdio.h>
int P(int a,int b);
int main()
{ int a,b,i,x;
  scanf("%d%d",&a,&b);
  x=P( a, b);
  printf("%d",x);
  return 0;
}
int P(int a, int b)
{ int i,p;
  if(b==0)
{
  return 1;
  
}
else {if(b==1)
        return a;
  else{
    return a*P(a,b-1);
  }
