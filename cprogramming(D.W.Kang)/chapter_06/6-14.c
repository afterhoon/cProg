#include <stdio.h>

int main() {
    int i, n, result;
    printf("n의 값을 입력하시오: ");
    scanf("%d", &n);

    result = 0;
    for(i = 0 ; i < n ; i++) {
        result += (i + 1) * (i + 1);
    }

    printf("계산한 값은 %d입니다.\n", result);
    return 0;
}