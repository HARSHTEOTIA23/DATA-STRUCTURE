#include<stdio.h>
int main()
{   int a[10],i,n,k,j;
  int b[100]={0};
  printf("ENTER THE NO. OF ELEMENTS\n");
  scanf("%d",&n);
  printf("ENTER THE ELEMENTS\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  } 
  i=0;
  for(i=0;i<n;i++)
    { k=a[i];
      b[k]=b[k]+1;
    }
for(j=0;j<100;j++)
  {if(b[j]==1)
  {
    printf("%d-->NON REPEATING\n",j);
  }
    else{
if(b[j]>1)
{
  printf("%d-->REPEATING\n",j);
}
    }
  }
return 0;

  
}