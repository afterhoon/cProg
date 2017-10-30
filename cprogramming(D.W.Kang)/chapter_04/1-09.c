#include <stdio.h>

int main() {
    int x, y, location;
    printf("X좌표: ");
    scanf("%d", &x);
    printf("Y좌표: ");
    scanf("%d", &y);
    x*y > 0 ? (location = 1) : (location = 2);
    y > 0 ? (location += 0) : (location += 2);
    printf("좌표의 위치: %d사분면\n", location);
    return 0;
}