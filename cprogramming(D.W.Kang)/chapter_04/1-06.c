#include <stdio.h>

int main() {
    int num;
    double result;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    
    result = (num*num*num - 20.0) / (num - 7);
    
    printf("수식의 값은 %lf입니다.\n", result);
    return 0;
}