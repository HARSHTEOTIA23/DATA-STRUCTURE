#include<stdio.h>
int interpolationsearch(int arr[],int l,int h,int value)
{  if(l<=h&&value>=arr[l]&&value<=arr[h]){
  int pos=l + (value- arr[l]) *(h - l)/(arr[h] - arr[l]);
  if(value==arr[pos])
  {
    return pos;
  }
  else{
    if(value<arr[pos]){
      return interpolationsearch( arr, l,pos-1, value);
    }
    else{return interpolationsearch( arr, pos+1,h, value);}
  }}
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
  m=interpolationsearch( a,0 ,n-1, value);
  if(m>=0)
  { printf("the element is found at the index %d",m+1);}
   else printf("not found");
  return 0;
}