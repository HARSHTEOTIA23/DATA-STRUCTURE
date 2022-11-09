#include<stdio.h>
int main()
{ int a[10][10],b[10][10],c[10][10],x,y,j,m,i,k;
  printf("enter the size of matrix\n");
  scanf("%d %d",&x,&y);
  printf("enter the matrix 1\n");
  
  for(i=1;i<=x;i++)
    for(j=1;j<=y;j++)
    {
        scanf("%d",&a[i][j]);
    }
  for(i=1;i<=x;i++)
    { for(j=1;j<=y;j++)
    {
        printf("%d ",a[i][j]);
    }
      printf("\n");
      }
  
  printf("enter the  matrix 2\n");
  for(i=1;i<=x;i++)
    for(j=1;j<=y;j++)
    {
        scanf("%d",&b[i][j]);
    }
  for(i=1;i<=x;i++)
    { for(j=1;j<=y;j++)
    {
        printf("%d ",b[i][j]);
    }
      printf("\n");
      }
  
for(i=1;i<=x;i++)
  {for(j=1;j<=y;j++)
    {  c[i][j]=0;
     for(k=1;k<=y;k++)
       {
         c[i][j]=c[i][j]+a[i][k]*b[k][j];
       }
    }
    }
printf("the difference is is \n");
for(i=1;i<=x;i++)
    { for(j=1;j<=y;j++)
    {
        printf("%d ",c[i][j]);
    }
    printf("\n");
      }
  return 0;
}