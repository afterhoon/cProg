#include <stdio.h>
int main() {
	int arr[5];
	int i, max, min;
	for (i = 0; i < 5; i++) {
		printf("정수를 입력하시오: ");
		scanf("%d", &arr[i]);
	}
	max = min = arr[0];
	for (i = 1; i < 5; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	printf("최대값=%d 최소값=%d\n", max, min);
	return 0;
}