
#include<stdio.h>
int main()
{ int a[100],n,i,l,h,l1,m,value;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  l=0;
  h=n-1;
  printf("Enter the array\n");
  {for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);}
  printf("enter the element to be searched\n");
  scanf("%d",&value);
  while(l<=h)
    { l1=l+h;
      m=l1/2;
      if(
        a[m]==value
      )
      { printf("%d",m+1);
        break;}
      else{if(value<a[m])
        h=m-1;
          else{
            l=m+1;
          }
        
      }

      
    }
  return 0;
  }  
