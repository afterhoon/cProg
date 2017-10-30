#include <stdio.h>
int main() {
    double x;
    printf("실수 입력: ");
    scanf("%lf", &x);
    printf("소수점 표기 방법: %lf\n", x);
    printf("지수 표기 방법: %e\n", x);
    return 0;
}