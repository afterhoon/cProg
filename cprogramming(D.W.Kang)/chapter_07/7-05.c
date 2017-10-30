#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int arr[10] = { 0 };
	int i, max, maxPoint;
	srand((unsigned int)time(NULL));
	for (i = 0; i < 100; i++) {
		arr[rand() % 10]++;
	}
	max = arr[0];
	maxPoint = 0;
	for (i = 1; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxPoint = i;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	printf("가장 많이 생성된 수=%d\n", maxPoint);
	return 0;
}