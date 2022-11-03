#include <stdio.h>
int main()
{ int a[100],n,i,j,swap,position;
  printf("enter the no.of element\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
    {  scanf("%d",&a[i]);}
  for(i=0;i<n-1;i++)
    {position=i;
    for(j=i+1;j<n;j++)
      {if(a[position]>a[j])
      position=j;}
  if(position!=i)
  { swap=a[i];
    a[i]=a[position];
  a[position]=swap;
      }}
  printf("the required sorted array is:\n");
  for(i=0;i<n;i++)
    {printf("%d\n",a[i]);}
return 0;
}