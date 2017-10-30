#include <stdio.h>

int main() {
    int num[3], max, i;
    for (i = 0 ; i < 3 ; i++) {
        printf("정수를 입력하시오: ");
        scanf("%d", &num[i]);
        if (i == 0) {
            max = num[i];
        }
        else {
            if (max < num[i]) {
                max = num[i];
            }
        }
    }
    
    printf("가장 큰 수는 %d입니다.\n", max);
    return 0;
}