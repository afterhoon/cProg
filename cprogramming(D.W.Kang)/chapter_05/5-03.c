#include <stdio.h>

int main() {
    int num1, num2;
    printf("첫 번째 수를 입력: ");
    scanf("%d", &num1);
    printf("두 번째 수를 입력: ");
    scanf("%d", &num2);
    printf("두 수의 차는 %d입니다.\n", 
        num1>num2? (num1-num2) : (num2-num1) );
    return 0;
}