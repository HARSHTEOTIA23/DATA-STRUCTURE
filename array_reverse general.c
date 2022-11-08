#include<stdio.h>
int main()
{
int n,a[100],b[100],i,j;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    }
  
  for(i=0,j=n-1; j>=0;i++,j--)
    {
        b[j]=a[i];
    }
  printf("The reversed array is\n");
  for(j=0;j<n;j++)
    {

      printf("%d\n",b[j]);
    }
  return 0;
}