#include<stdio.h>
int main()
{int a[10],i,n,m,loc,key;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      scanf("%d",&m);
      loc=m%10;
      a[loc]=m;
    }
printf("enter the element to be searched\n");
  scanf("%d",&key);
  if(key==a[key%10])
  {
    printf("found");
  }
    else{
      printf("not found");
    }
  return 0;
}