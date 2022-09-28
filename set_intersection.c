#include <stdio.h>
int main() {
	int i = 0, j = 0, k = 0,b, A[10] = {1, 2, 4, 5, 7, 8, 15, 18, 24, 35},
		B[10] = {2, 3, 5, 9, 15, 18, 19, 22, 24, 35}, C[20];
	while (i < 10&&j < 10) {
		if (A[i] < B[j]) {
			i = i+1;
		
		} else {
			if (B[j] < A[i]) {
		
				j = j + 1;
			} else {if(A[i]==B[j])
				C[k] = A[i];
			j = j + 1;
			i = i + 1;
			k = k + 1;}
		}}
  b=k;
  for (k=0;k<=b-1;k++)
    {printf("%d\n",C[k]);}
  return 0;
  }
