#include<stdio.h>
int exponential_search(int a[],int n,int value)
{int i=1;
   while(i<=n)
    {if(value<=a[i])
    {return i;}
      else{
        i=i*2;
      }
         }
  return 0;
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
 
    return -1;
}
 
int main()
{
int a[100],n,value,i,x,y;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }
printf("enter the value to be searched\n");
  scanf("%d",&value);
  x=exponential_search(a,n,value);
  if(x<=2)
    {printf("the value is found  is at %d\n",x);}
     else{
  y=binarySearch(a,x/2,x,value);
       if(y>=0)
 {
   printf("element is found at the place %d",y);
 }
  else{printf("not found");}}
  return 0;
}