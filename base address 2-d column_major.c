#include <stdio.h>  
int main()
{
   int a[10][10],i,x,j,lr=0,lc=0,m,u=9,l=0;
  int *add;
  int *phy;
int *b;
  b=&a[0][0];
  printf("%p ",b);
  printf("enter the index of a for which address is to be found\n");
  scanf("%d",&i);
  scanf("%d",&j);
    
  phy=&a[i][j];
  printf("%p\n",phy);
  m=u-l+1;
  add=b+1*((j-lc)*m+(i-lr));
printf("%p",add);

return 0;

  
}