#include <stdio.h>

int main() {
    int input, min, sec;
    printf("시간을 입력하시오(초): ");
    scanf("%d", &input);
    min = input / 60;
    sec = input % 60;
    printf("%d초는 %d분 %d초입니다.\n", input, min, sec);
    return 0;
}