#include <stdio.h>
int main() {
	int a, b, c, max;
	int isRegular = 0, isIso = 0;
	printf("삼각형의 세변을 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	if (max < (a + b + c - max)) {
		if (a == b) {
			if (b == c) isRegular = 1;
			else if (b != c) isIso = 1;
		}
		else if (b == c) {
			if (c == a) isRegular = 1;
			else if (a != c) isIso = 1;
		}
		else if (c == a) {
			if (a == b) isRegular = 1;
			else if (a != b) isIso = 1;
		}

		if (isRegular) printf("정삼각형\n");
		else if (isIso) printf("이등변삼각형\n");
		else printf("일반 삼각형\n");
	}
	else {
		printf("삼각형이 될 수 없습니다.\n");
	}	

	return 0;
}