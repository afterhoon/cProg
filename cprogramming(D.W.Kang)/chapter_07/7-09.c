#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int tile[10] = { 0 };
	int size, cnt, i, direction;
	srand((unsigned int)time(NULL));

	size = sizeof(tile) / sizeof(int);
	cnt = size / 2;

	while (1) {
		direction = rand() % 2;
		memset(tile, 0, sizeof(tile));
		tile[cnt] = 1;
		for (i = 0; i < 10; i++) {
			if (tile[i]) printf("* ");
			else printf("- ");
		}
		printf("\n");
		
		if (cnt <= 0) {
			cnt++;
		}
		else if (cnt >= size-1) {
			cnt--;
		}
		else {
			if (direction) cnt++;
			else cnt--;
		}
		getch();
	}
	return 0;
}