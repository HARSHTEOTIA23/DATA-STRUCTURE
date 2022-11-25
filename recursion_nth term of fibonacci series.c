#include<stdio.h>
unsigned long long fib(int n)
{
  if(n==0)
  {return 0;}
    else if(n==1)
      return 1;
  else{
    return fib(n-1)+fib(n-2);
  }
}
int main()
{int n;
  unsigned long long y;
  printf("enter the number\n");
  scanf("%d",&n);
  y=fib(n);
printf("the value is %llu",y);
  return 0;
  
}