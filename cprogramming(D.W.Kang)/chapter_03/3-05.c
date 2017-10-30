#include <stdio.h>
int main() {
    int x;
    printf("아스키 코드값 입력: ");
    scanf("%d", &x);
    printf("%d >> %c\n", x, x);
    return 0;
}