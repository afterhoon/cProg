#include <stdio.h>

int main() {
    int i;
    int x, y, sum = 0;
    printf("시작정수: ");
    scanf("%d", &x);
    printf("종료정수: ");
    scanf("%d", &y);
    
    for (i = x ; i < y + 1 ; i++) {
        sum += i;
    }
    
    printf("Sum of %d to %d = %d\n", x, y, sum);
    return 0;
}