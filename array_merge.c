#include <stdio.h>
int main() {
	int i = 0, j = 0, k = 0,b, A[10] = {1, 2, 4, 5, 7, 8, 15, 19, 24, 32},
		B[10] = {3, 4, 5, 9, 15, 18, 19, 22, 24, 35}, C[20];
	while (i < 10&&j < 10) {
		if (A[i] < B[j]) {
			C[k] = A[i];
			i = i+1;
			k = k+1;
		} else {
			if (B[j] < A[i]) {
				C[k] = B[j];
				j = j + 1;
				k = k + 1;
			} else {if(A[i]==B[j])
				C[k] = A[i];
			k = k + 1;
        C[k]=A[i];
        i=i+1;
        j=j+1;
        k=k+1;}
		}}
    while(i<10)
    {
      C[k]=A[i];
      i=i+1;
      k=k+1;
    }
  while(j<10)
    {
      C[k]=B[j];
      j=j+1;
      k=k+1;
      
    }
  b=k;
  printf("ARRAY AFTER MERGING IS \n");
  for (k=0;k<=b-1;k++)
    {printf("%d\n",C[k]);}
  return 0;
  }
