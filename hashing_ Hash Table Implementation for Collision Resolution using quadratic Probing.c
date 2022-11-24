#include<stdio.h>
int main()
{
  int a[100]={0},n,i,m,loc,j=1,key,h=1,flag=0,flag2=0,d;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=1;i<=n;i++)
    {j=1;
      scanf("%d",&m);
      loc=m%100;
      d=loc;
      if(loc<=98)
      { while(a[loc]!=0)
        {if(a[loc]==0)
      {break;}
      else{loc=d;
        loc=loc+j*j;
        j=j+1;}
          }
      a[loc]=m; 
    }
      else{
        if(a[99]==0)
        { a[99]=m;}
        else{
          loc=0,d=2;
          while(a[loc]!=0)
            { loc=0;
              if(a[loc]==0)
              { break;
                }
              else{loc=loc+d*d-1;
                d=d+1;}
            }
          a[loc]=m;
        }
      }}
  for(i=0;i<=99;i++)
    {
  printf("%d ",a[i]);}
  
  printf("enter the no. to be searched\n");
  scanf("%d",&key);
  loc=key%100;
  d=loc;
  if(loc<=98)
  { while(a[loc]!=0)
    {if(key==a[loc])
      { printf("found");
        flag=1;
        break;}
      else{ loc=d;
        loc=loc+h*h;
        h=h+1;}
    }
  if(flag==0)
  {printf("not found");}}
  else{if(key==a[99])
        { printf("found");}
        else{
          loc=0;d=2;
          while(a[loc]!=0)
            { 
              if(key==a[loc])
              { printf("found");
                flag2=1;
                break;
                }
              else{loc=0;
                loc=loc+(d*d)-1;
                d=d+1;}
    
              }
          if(flag2==0)
          { printf("not found");}
          }
    }
  return 0;
}