#include<stdio.h>
#include<math.h>
int jumpsearch(int arr[],int n,int value)
{ int i=0;
  int step,y;
  step=sqrt(n);
  while(i<n&&value>arr[i])
    {
     i=i+step;
      
    }
  for(y=i-step;y<n;y++)
    {
      if(value==arr[y])
      {
        return y;
      }
      
    }
  return -1;
}
int main()
{
  int a[100],n,i,step,value,m;
  printf("enter the no of elements\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("enter the value to be searched\n");
  scanf("%d",&value);
  m=jumpsearch( a, n, value);
  if(m>=0)
  { printf("the element is found at the index %d",m+1);}
   else printf("not found");
  return 0;
}