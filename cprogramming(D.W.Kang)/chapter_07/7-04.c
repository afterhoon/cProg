#include <stdio.h>
int main() {
	int arr[10][10];
	int num1, num2, i, j;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			arr[i][j] = i * j;
		}
	}

	printf("알고싶은 구구단을 입력하시오(예: 9 3): ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%dX%d=%d\n", num1, num2, arr[num1][num2]);
	return 0;
}