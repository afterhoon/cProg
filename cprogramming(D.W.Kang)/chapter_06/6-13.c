#include <stdio.h>

int searchMax(int a, int b, int c) {
    int max;
    max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}

int isTriangle(int a, int b, int c) {
    int max;
    max = searchMax(a, b, c);
    return max < a + b + c - max ? 1 : 0;
}

int main() {
    int cnt = 1;
    int length = 100;
    int i, j, k;
    for(i = 0 ; i < length ; i++) {
        for(j = 0 ; j < length ; j++) {
            for(k = 0 ; k < length ; k++) {
                if (isTriangle(i, j, k)) {
                    if (i*i + j*j == k*k) {
                        printf("%3d: %4d %4d %4d\n", cnt++, i, j, k);
                    }
                }
                
            }
        }
    }
    return 0;
}