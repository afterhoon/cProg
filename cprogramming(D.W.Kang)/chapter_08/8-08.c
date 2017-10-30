#include <stdio.h>
#include <math.h>

int quad_eqn(double a, double b, double c) {
    double d = pow(b, 2) - 4 * a * c;
    if(d > 0) {
        printf("%lf\n", (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) );
        printf("%lf\n", (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) );
    }
    else if(d == 0) {
        
    }
    else {
        printf("근이 없습니다.\n");
    }
}

int main() {
    double a, b, c;
    printf("2차 방정식의 계수를 입력하시오: \n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    
    quad_eqn(a, b, c);
    
    return 0;
}