#include<stdio.h>
int digit(n)
{
  int i=0;
  while(n!=0)
    {
      n=n/10;
      i=i+1;
    }
  return i;
}
int power(int base, int exponent)
{int p;
int result=1;
for (p=exponent; p>0; p--)
{
result = result * base;
}
return result;
}
int reverse(int n)
{int i=0,k,rev=0,d,p;
  d=digit(n);
  p=power(10,d-1);
  for(i=p;i>=1;i=i/10)
    {
      k=n%10;
      rev=rev+k*i;
      n=n/10;
    }
  return rev;
}
int main()
{
  int n,b;
  printf("enter the no. to be reversed \n");
  scanf("%d",&n);
 b=reverse(n);
  printf("%d",b);
  return 0;
}