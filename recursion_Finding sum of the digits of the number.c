#include<stdio.h>
int sumofdigits(n)
{int k,sum=0;
  while(n!=0)
  {k=n%10;
    sum=sum+k;
    n=n/10;
     }
  return sum;
}
int main()
{
  int n,x;
  printf("enter the no.\n");
  scanf("%d",&n);
  x=sumofdigits(n);
  printf("%d",x);
  return 0;
}