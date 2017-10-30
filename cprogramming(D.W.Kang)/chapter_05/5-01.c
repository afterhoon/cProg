#include <stdio.h>
int main() {
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    printf("%d 은 ", num);
    if(num%2)
        printf("홀");
    else
        printf("짝");
    printf("수입니다.\n");
    return 0;
}