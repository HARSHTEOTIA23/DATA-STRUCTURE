#include<stdio.h>
int main()
{
    int a[3][3];
  int i,n,j,det=0;
  printf("enter the size the size of matrix\n");
  scanf("%d",&n);
  printf("enter the elements of the matrix\n");
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  if(n==1)
  {
   det=a[1][1];
  }
  else{
  if(n==2)
  {
      det=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);
  }
else{
  for(i=1;i<=3;i++)
    {
    if(i==1)
    {
      det=det+a[1][i]*(a[i+1][i+1]*a[i+2][i+2]-a[i+1][i+2]*a[i+2][i+1]);
    }
      if(i==2)
      {
        det=det-(a[1][2]*(a[2][1]*a[i+1][i+1]-a[i][i+1]*a[i+1][i-1]));
      }
      if(i==3)
      {
        det=det+a[1][i]*(a[2][1]*a[i][i-1]-a[i-1][i-1]*a[i][i-2]);
      }
    }
}}
  printf("THE DETERMINANT IS :\n");
printf("%d",det);

  return 0;
}