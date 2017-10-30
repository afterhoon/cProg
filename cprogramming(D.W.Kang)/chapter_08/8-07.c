#include <stdio.h>
#include <math.h>

double dist_2d(int x1, int y1, int x2, int y2) {
    double d;
    d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return d;
}

int main() {
    int x1, y1, x2, y2;
    printf("첫번째 점의 좌표를 입력하시오:(x, y)");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("두번째 점의 좌표를 입력하시오:(x, y)");
    scanf("%d", &x2);
    scanf("%d", &y2);
    printf("두점 사이의 거리는 %lf입니다.\n", dist_2d(x1, y1, x2, y2));
    return 0;
}