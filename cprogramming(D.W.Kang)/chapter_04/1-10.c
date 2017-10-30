#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double d, result1, result2;
    
    printf("ax^2 + bx + c 의 근을 구하는 프로그램입니다.\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    
    d = b*b - 4*a*c;
    result1 = (-b + sqrt(d)) / 2*a;
    result2 = (-b - sqrt(d)) / 2*a;
    
    printf("근1: %lf\n", result1);
    printf("근2: %lf\n", result2);
    
    return 0;
}