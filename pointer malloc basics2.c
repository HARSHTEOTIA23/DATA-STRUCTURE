#include<stdio.h>
#include<stdlib.h>
int main()
{  int *p;
  char *c;
  int n1,n2;
  printf("%lu\n", sizeof(int));
  int i;
  printf("enter the no .of elemnts\n");
  scanf("%d",&n1);
  p=(int *)malloc(n1*sizeof(int));
for(i=0;i<n1;i++)
  {

scanf("%d",(p+i));
    
  }
for(i=0;i<n1;i++)
  {

printf("%d ",*(p+i));
    
  }
  printf("enter the no .of character\n");
  scanf("%d",&n2);
  c=(char *)malloc(n2*sizeof(char));
  for(i=0;i<n2;i++)
  {

scanf("%c",(c+i));
    
  }
  printf("\n");
  for(i=0;i<n2;i++)
  {

printf("%c ",*(c+i));
    
  }
  
  return 0;
}