#include <stdio.h>
int main() {
	int i, sel;
	int arr[11] = { 0 };
	char yn;
	while (1) {
		printf("좌석을 예약하시겠습니까?( y또는n) ");
		scanf(" %c", &yn);
		if (yn == 'Y' || yn == 'y') {
			sel = 0;
			yn = 0;
			printf("------------------------------------\n");
			for (i = 1; i < 11; i++)
				printf("  %d", i);
			printf("\n");
			printf("------------------------------------\n");
			for (i = 1; i < 11; i++)
				printf("  %d", arr[i]);
			printf("\n");
			printf("몇번째 좌석을 예약하시겠습니까 ");
			scanf("%d", &sel);
			getchar();
			if (sel <= 0 || sel > 10) {
				printf("해당 좌석은 존재하지 않습니다.\n");
			}
			else {
				if (arr[sel]) {
					printf("이미 예약된 좌석입니다.\n");
				}
				else {
					arr[sel] = 1;
					printf("예약되었습니다.\n");
				}
			}
		}
		else if (yn == 'N' || yn == 'n') {
			printf("취소하셨습니다.\n");
		}
		else {
			printf("잘못된 선택입니다.\n");
		}
		
		printf("\n\n");
	}
	return 0;
}