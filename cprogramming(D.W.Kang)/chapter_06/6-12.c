#include <stdio.h>

int main() {
    int i, j, data[10];
    for (i = 0; i < 10; i++) {
        printf("데이터를 입력하시오: ");
		scanf("%d", &data[i]);
		for (j = 0; j < data[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 50; i++) {
		printf("%2d\t", 50 - i);
		for (j = 0; j < 10; j++) {
			if (data[j] >= 50 - i) printf("*");
			else printf(" ");
			printf("\t");
		}
		printf("\n");
	}
	for (i = 0; i < 10; i++) {
		printf("\t%d", i + 1);
	}
	printf("\n");
	return 0;
}