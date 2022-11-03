
#include <stdio.h>
int main()
{ int a[100],n,x,i,j,position;
  printf("enter the no.of element\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
    {  scanf("%d",&a[i]);}
  for(i=1;i<n;i++)
    {  x=a[i];
      j=i-1;
      while(a[j]>x)
        {
          a[j+1]=a[j];
          j=j-1;
        }
   a[j+1]=x;
      
    }
  printf("the required sorted array is:\n");
  for(i=0;i<n;i++)
    {printf("%d\n",a[i]);}
return 0;
}