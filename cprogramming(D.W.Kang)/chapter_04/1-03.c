#include <stdio.h>

int main() {
    int i;
    printf("정수\t제곱값\t세제곱값\n");
    for(i = 0 ; i < 5 ; i++) {
        printf("%3d\t%3d\t%3d\n", i, i*i, i*i*i);
    }
    return 0;
}