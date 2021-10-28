/*
На вход программе подается натуральное число N не превосходящее 10000 и, далее, N чисел задающих перестановку π длины N. Требуется найти перестановку σ = π•π•π.

*/

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 1; i<=n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int k = 1; k<=n; k++)
		printf("%d ", arr[arr[arr[k]]]);
	return 0;
}
