#include<stdio.h>
int main()
{   int a[10],i,n,j;
  printf("ENTER THE NO. OF ELEMENTS\n");
  scanf("%d",&n);
  printf("ENTER THE ELEMENTS\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }    
  for(j=1;j<=n;j++)
    { if(a[j-1]==j)
    {
      j=j+1;
    }
else{
  break;
}
      }
printf("THE MISSING ELEMENT Is %d",j);


return 0;

  
}