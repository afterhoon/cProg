#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, i;
    double d, result1, result2;
    printf("계수 a를 입력하시오: ");
    scanf("%d", &a);
    printf("계수 b를 입력하시오: ");
    scanf("%d", &b);
    printf("계수 c를 입력하시오: ");
    scanf("%d", &c);
    d = b*b - 4 * a*c;
    if (a) {
        if (d < 0) {
            printf("위의 이차 방정식의 실근은 존재하지 않습니다.\n");
        }
        else {
            result1 = (-b + sqrt(d)) / (2 * a);
            result2 = (-b - sqrt(d)) / (2 * a);
            printf("%lf\n", sqrt(d));
            printf("위의 이차 방정식의 실근은 %.2lf과 %.2lf입니다.\n",
                result1, result2);
        }
    }
    else {
        result1 = -c / b;
        printf("위의 이차 방정식의 실근은 %.2lf입니다.\n", result1);
    }
    return 0;
}