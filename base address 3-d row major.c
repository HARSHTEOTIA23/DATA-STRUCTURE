#include<stdio.h>
int main()
{
int a[10][10][10],i,j,k,x=0,y=0,z=0,m,n=10,u=9,l=0;
  int *add;
  int *phy;
int *b;
  b=&a[0][0][0];
  printf("%p ",b);
  printf("enter the index of a for which address is to be found\n");
  scanf("%d",&i);
  scanf("%d",&j);
  scanf("%d",&k);
    
  phy=&a[i][j][k];
  printf("%p\n",phy);
  m=10;
  add=b+1*(n*m*(i-x)+n*(j-y)+(k-z));
printf("%p",add);

return 0;

  
}