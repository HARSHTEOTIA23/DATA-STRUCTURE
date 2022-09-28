#include <stdio.h>
int main() {
	int A[10] = {2, 4, 5, 6, 7, 8, 10, 23, 34, 35};
	int B[10] = {3, 5, 6, 7, 11, 24, 34, 67, 78, 89};
	int i = 0, j = 0, k = 0, C[20];
	while (i < 9 && j < 9) {
		if (A[i] < B[j]) {
			C[k] = A[i];
			i = i + 1;
			k = k + 1;
		} 
    

		C[k] = B[j];
		j = j + 1;
		k = k + 1;
	}
	while (i < 10) {
		C[k] = A[i];
		i = i + 1;
		k = k + 1;
	}
	while (j < 10) {
		C[k] = B[j];
		j = j + 1;
		k = k + 1;
	}

	for (k = 0; k <= 19; k++)
		printf(" %d", C[k]);
  return 0;
}







