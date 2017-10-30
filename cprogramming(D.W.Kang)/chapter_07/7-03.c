#include <stdio.h>
int main() {
	int arr[3][4] = { {1, 30, 10, 11}, {2, 40, 90, 32}, {3, 70, 65, 56} };
	int i, j;
	double avg;
	for (i = 0; i < 3; i++) {
		avg = 0;
		for (j = 1; j < 4; j++) {
			avg += arr[i][j];
		}
		avg /= 3;
		printf("%d번 학생: %lf\n", arr[i][0], avg);
	}
	return 0;
}