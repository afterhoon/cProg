#include <stdio.h>

int main() {
    int num, sum = 0;
    do {
        printf("정수를 입력하시오: ");
        scanf("%d", &num);
        sum += num;
    } while(num != 0);
    printf("합계=%d\n", sum);
    return 0;
}