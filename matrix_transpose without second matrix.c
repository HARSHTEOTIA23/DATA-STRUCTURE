#include<stdio.h>
int main()
{ int a[10][10],i,j,x,m,n;
  printf("enter the order of matrix\n");
  scanf("%d%d",&m,&n);
  printf("enter the matrix\n");
  for(i=1;i<=m;i++)
    { for(j=1;j<=n;j++)
        {
      scanf("%d",&a[i][j]);
    }}
   for(i=1;i<=m;i++)
     {for(j=1;j<=n;j++)
        {
      printf("%d ",a[i][j]);
    }printf("\n");
       }
  for(i=1;i<=m;i++)
    {for(j=1;j<=n;j++)
        {
      if(i>j)
      {   x=a[j][i];
        a[j][i]=a[i][j];
        a[i][j]=x;
      }
    }}
  printf("THE TRANSPOSE IS:\n");
   for(i=1;i<=n;i++)
     {for(j=1;j<=m;j++)
        {
      printf("%d ",a[j][i]);
    }printf("\n");
       }
  
  return 0;
}