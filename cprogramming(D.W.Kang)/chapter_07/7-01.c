#include <stdio.h>
int main() {
	int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int size, i;
	size = sizeof(days) / sizeof(int);
	for (i = 0; i < size; i++) {
		printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
	}
	return 0;
}