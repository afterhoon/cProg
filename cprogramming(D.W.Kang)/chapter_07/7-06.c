#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int i;
	int arr[6] = { 0 };
	srand((unsigned int)time(NULL));

	for (i = 0; i < 60000; i++) {
		arr[rand() % 6]++;
	}

	printf("================\n");
	printf("면\t빈도\n");
	printf("================\n");
	for (i = 0; i < 6; i++)
		printf("%3d\t%5d\n", i, arr[i]);

	return 0;
}