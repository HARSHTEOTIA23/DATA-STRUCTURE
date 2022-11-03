
#include<stdio.h>
#include<string.h>
int main()
{   int i,t,j,flag=0;
    char name[20];
  scanf("%s",name);
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
     if(name[j]!=name[i])
    { flag=1;
     break;}
     j=j+1;
     i=i-1;
  }
  if(flag==0)
  {
      printf("palindrome");}
      else
          printf("not palindrome");
      
  return 0;    
  }
