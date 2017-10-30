#include <stdio.h>

double func(double x, double y) {
    return 1.5 * x + 3.0 * y;
}

int main(void)
{
    double x, y;
    int i, j;
    for(i = 1 ; i <= 2 ; i++) {
        for(j = 1 ; j <= 2 ; j++) {
            printf("x=%.1lf, y=%.1lf, f(x,y)=%lf\n", (double)i, (double)j, func(i,j));
        }
    }
    return 0;
}