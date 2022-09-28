#include<stdio.h>
int main()

{

int A[100],K=0,UB;

printf("Enter the Array size less than 100: ");

scanf("%d",&UB);

printf("Enter the elements in array:" );

for(K=0;K<UB;K++)

{

scanf("%d",&A[K]);

}

printf("The Traverse of array is:");

for(K=0;K<UB;K++)

{

printf("%d ",A[K]);

}

return 0;

}
   