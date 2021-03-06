/*
 Дано N шаров. Требуется определить, есть ли среди них два шара, которые имеют общую точку.

На стандартном потоке ввода задаётся натуральное число N (0 < N ≤ 100), после которого следуют N строк, описывающие шары. В каждой строке записаны координаты центра i-го шара xi yi zi и его радиус ri. xi, yi, zi и ri вещественные не превосходящие по модулю 1000. ri строго положительно.

На стандартный поток вывода напечатайте YES, если среди шаров есть два, которые имеют общую точку. В противном случае напечатайте NO. 

*/

#include <stdio.h>
#include <math.h>

int main(void) {
	int n;
	scanf("%d", &n);
	double x[100],y[100],z[100],r[100], dlina, sum_rad;
	for (int i = 0; i<n; i++) {
		scanf("%lf%lf%lf%lf", &x[i], &y[i], &z[i], &r[i]);
	}
	for (int i = 0; i<n-1; i++) {
		for (int j = i+1; j<n; j++) {
			dlina = sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2) + pow((z[i]-z[j]),2));
			sum_rad = r[i]+r[j];
			if (dlina<=sum_rad) {
				printf("YES");
				return 0;			
			}
		}
	}
	printf("NO");
	return 0;

}
