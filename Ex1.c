/*
 На стандартном потоке ввода задаётся некоторое количество целых чисел (не более 10000 штук), не равных 0. Последовательность оканчивается нулём, который в неё не входит.

На стандартный поток вывода напечатайте исходную последовательность в обратном порядке. Число 0, являющееся признаком конца последовательности, выводить не нужно.

Указание: при решении используйте массивы. 

*/

#include <stdio.h>
int main(void) {
	int a = 1, k = 0, arr[10000];
	while (a!=0) {
	       	scanf("%d", &a);
		arr[k] = a;	
		k++;
	}
	for (int j = k-2; j>=0; j--)
		printf("%d ", arr[j]);
	return 0;
}
