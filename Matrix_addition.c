#include<stdio.h>
int main()
{
int a[10][10],i,j,k,n,b[10][10],c[10][10];
  printf("ENTER THE SIZE OF MATRIX ");
  scanf("%d%d",&k,&n);
  printf("ENTER THE ELEMENTS OF MATRIX 1\n");
for(i=0;i<=k-1;i++)
  {for(j=0;j<=n-1;j++)
    { scanf("%d",&a[i][j]);}

    }
  printf("enter the elements of 2nd matrix\n");
  for(i=0;i<=k-1;i++)
  {for(j=0;j<=n-1;j++)
    { scanf("%d",&b[i][j]);}

    }
for(i=0;i<=k-1;i++)
  {
    for(j=0;j<=n-1;j++)
      {
        c[i][j]=a[i][j]+b[i][j];
      }
  }

  for(i=0;i<=k-1;i++)
    { for(j=0;j<=n-1;j++)
      {
    printf("%d ",c[i][j]);
      }
printf("\n");

      
    }

  return 0;
}
