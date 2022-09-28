#include<stdio.h>
int main()
{ int a[10]={1,3,4,5,6,23,45,67,78,89},i,key;
  scanf("%d",&key);
  for(i=0;i<=9;i++)
    if(a[i]==key)
      break;
  if(i<=9)
  printf("element found at %d",i+1);
  else{
printf("element not found");

   return 0; 
  }
   

  }
