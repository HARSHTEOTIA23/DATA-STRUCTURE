#include<stdio.h>
#include<stdlib.h>
int main()
{  int *p;
  char *c;
  printf("%lu", sizeof(long long));
  int i;
  p=(int *)malloc(40);
for(i=0;i<=9;i++)
  {

scanf("%d",(p+i));
    
  }
for(i=0;i<=9;i++)
  {

printf("%d ",*(p+i));
    
  }
  
  c=(char *)malloc(10);
  for(i=0;i<=9;i++)
  {

scanf("%c",(c+i));
    
  }
  printf("\n");
  for(i=0;i<=9;i++)
  {

printf("%c ",*(c+i));
    
  }
  
  return 0;
}