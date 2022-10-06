#include<stdio.h>
void quicksort(int num[100],int low, int high)
{   int pivot,i,j,temp;
  
  if(low<high)
  {  pivot=low;
     i=low;
     j=high;
    while(i<j){while(num[i]<=num[pivot]&&i<high)
      i=i+1;
    while(num[j]>num[pivot])
       j=j-1;
       if(i<j)
       {
          temp=num[i];
         num[i]=num[j];
         num[j]=temp;
          }
      }
          temp=num[pivot];
          num[pivot]=num[j];
          num[j]=temp;
    quicksort(num,low,j-1);
    quicksort(num,j+1,high);

  }
}

int main()
{
   int count,i,num[100];
  printf("ENTER THE NO. OF ELEMENTS\n");
  scanf("%d",&count);
  printf("ENTER THE ELEMENTS\n");
  for(i=0;i<count;i++)
    {
      scanf("%d",&num[i]);
    }
  quicksort(num,0,count-1);
  printf("SORTED ARRAY IS \n");
  for(i=0;i<count;i++)
    {
      printf("%d ",num[i]);
    }

return 0;  
}
