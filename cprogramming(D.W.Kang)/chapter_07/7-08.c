#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double avg, sd;
	double arr[5];
	int i, size;

	avg = 0;
	sd = 0;
	size = sizeof(arr) / sizeof(double);
	for (i = 0; i < size; i++) {
		printf("실수를 입력하시오: ");
		scanf("%lf", &arr[i]);
		avg += arr[i];
	}
	
	avg /= size;
	for (i = 0; i < size; i++) {
		sd += (arr[i] - avg) * (arr[i] - avg);
	}
	sd = sqrt(sd / size);

	printf("평균: %lf\n", avg);
	printf("표준편차: %lf\n", sd);
	return 0;
}