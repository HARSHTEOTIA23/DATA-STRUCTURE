#include<stdio.h>
int main()
{
  int a[100]={0},n,i,m,loc,value,j,key,flag=0,flag2=0;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=1;i<=n;i++)
    {
      scanf("%d",&m);
      loc=m%100;
      if(loc<99){
      while(a[loc]!=0)
      {
      if(a[loc]==0)
      {
        break;
      }
      else{loc=loc+1;}
     }
      a[loc]=m;
      } 
      else{
        if(a[99]==0)
        {a[99]=m;
          }
        else{loc=0;
          while(a[loc]!=0)
            { if(a[0]==0)
          {break;}
          else{loc=loc+1;}
      }
          a[loc]=m;
          }}}
  
  printf("enter the element to be searched\n");
  scanf("%d",&key);
    j=key%100;
  if(j<99)
  { while(a[j]!=0)
       {if(key==a[j])
      {
        printf("found");
        flag=1;
        break;
      }
      else{j=j+1;}}
  if(flag==0)
  {printf("not found");}}
  else{
    if(key==a[99])
    { printf("found");}
    else{
      loc=0;
      while(a[j]!=0)
        {
          if(key==a[loc])
          {
            printf("found");
            flag2=1;
            break;
          }
          else{loc=loc+1;}
        }
    }
    if(flag2==0)
    { printf("not found");}
  }
  
     return 0;
}