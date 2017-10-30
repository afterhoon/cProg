#include <stdio.h>
double get_bigger(double a, double b) {
    return a > b ? a : b;
}
double input() {
    double temp;
    printf("실수를 입력하시오: ");
    scanf("%lf", &temp);
    return temp;
}
int main() {
    double a, b;
    a = input();
    b = input();
    printf("더 큰수는 %lf입니다.\n", get_bigger(a, b));
    return 0;
}