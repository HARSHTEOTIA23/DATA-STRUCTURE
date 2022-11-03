
#include<stdio.h>
#include<string.h>
int main()
{   int i,t,j;
    char name[20];
  gets(name);
  puts(name);
  i=0;
  while(name[i]!=0)
  {
      i=i+1;
      
  }
  i=i-1;
  j=0;
  while(j<i)
  {
      t=name[i];
      name[i]=name[j];
      name[j]=t;
      j=j+1;
      i=i-1;
  }
    puts(name);
  return 0;
}
