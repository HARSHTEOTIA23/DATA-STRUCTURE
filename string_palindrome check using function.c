#include<stdio.h>
int palindrome(char a[])
{ int i,j,flag=0;
  char b[100];
  while(a[i]!='\0')
    {i=i+1;}
  int m=i-1;
  for(j=0;j<=i-1;j++)
    {
      b[m]=a[j];
      m=m-1;
    }
     
  m=0;
  for(j=0;j<=i-1;j++)
    {if(a[j]==b[m])
    { m=m+1;}
      else{flag=-1;
        break;}
      }
    return flag;
 
}
int main()
{
  char a[100],k;
  printf("enter the string\n");
  scanf("%s",a);
  k=palindrome(a);
  if(k==0)
  {
    printf("palindrome");
    
  }
  else{printf("not palindrome");}
  return 0;
}