#include <stdio.h>  
int main()
{
   int a[10][10],i,x,j,lr=0,lc=0,n,u=9,l=0;
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
  n=u-l+1;
  add=b+1*((i-lr)*n+(j-lc));
printf("%p",add);

return 0;

  
}