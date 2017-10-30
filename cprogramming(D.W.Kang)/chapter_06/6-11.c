#include <stdio.h>

int main() {
    int num;
    int i, j;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    for(i = 1 ; i <= num ; i++) {
        for(j = 1 ; j <= num ; j++) {
            if(i >= j) printf("%2d", j);
        }
        printf("\n");
    }
    return 0;
}