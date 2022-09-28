
#include<stdio.h>
int fac(int n);
int main()
{ int x,n;
  printf("enter the number ");
  scanf("%d",&n);
  x=fac(n);
  printf("the factorial is %d",x);
  return 0;
}
int fac(int n)
{  
  if(n==1)
  { return 1;}
    if(n==2)
    {
      return 2;
    }
  else {
    return n*fac(n-1) ;
  }


}