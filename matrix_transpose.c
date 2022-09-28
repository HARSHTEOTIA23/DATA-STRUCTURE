#include<stdio.h>
int main()
{
int a[10][10],i,j,k,n,b[10][10];
  printf("ENTER THE SIZE OF MATRIX ");
  scanf("%d%d",&k,&n);
  printf("ENTER THE ELEMENTS OF MATRIX  ");
for(i=0;i<=k-1;i++)
  {for(j=0;j<=n-1;j++)
    { scanf("%d",&a[i][j]);}

    }
for(i=0;i<=k-1;i++)
  {
    for(j=0;j<=n-1;j++)
      {
    b[j][i]=a[i][j];
      }
  }

  for(i=0;i<=k-1;i++)
    { for(j=0;j<=n-1;j++)
      {
    printf("%d ",b[i][j]);
      }
printf("\n");

      
    }

  return 0;
}
