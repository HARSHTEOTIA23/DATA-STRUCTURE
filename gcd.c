#include<stdio.h>
int gcd(int a,int b);
int main()
{ int a,b,k;
  printf("enter two no.\n");
  scanf("%d%d",&a,&b);
  k=gcd(a,b);
  printf("the gcd is %d ",k);
  return 0;
}
int gcd(int a,int b)
{
  if(a==b)
  { return a;}
  else{
if(a>b)
{return gcd(a-b,b);}
    else return gcd(a,b-a);
    }
  }
