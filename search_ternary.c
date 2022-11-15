#include<stdio.h>
int ternarysearch(int l,int h,int value, int arr[])
{ if(h>=l)
{  int m1=l+(h-l)/3;
  int m2=h-(h-l)/3;
   if(value==arr[m1])
      {
        return m1;
      
      }  
     if(value==arr[m2])
        {
          return m2;
          
        }
       if(value<arr[m1]){
         return ternarysearch(l,m1-1,value,arr);
       }
  else if(value>arr[m2]){
    return ternarysearch(m2+1,h,value,arr);
  }
  else return ternarysearch(m1+1,m2-1,value, arr);
  
}

 return -1;
  
}
int main()
{
  int a[100],i,n,m1,m2,value,l,h,p;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("enter the value to be searched\n");
  scanf("%d",&value);
  l=0;
  h=n-1;
  p=ternarysearch(l,h,value,a);
 if(p>=0)
 { printf("the element is found at the place %d",p+1);}
  else printf("element is not found");
  return 0;
        }