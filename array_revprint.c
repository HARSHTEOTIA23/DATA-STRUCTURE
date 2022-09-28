#include<stdio.h>

int main()
{
    int A[5]={1,2,6,5,6},i,j,B[5];
 

    for(i=0,j=4;i<=4;i++,j--)
      B[j]=A[i];
   for(j=0;j<=4;j++)
  { printf("%d\n",B[j]);} 
      
return 0;
}


