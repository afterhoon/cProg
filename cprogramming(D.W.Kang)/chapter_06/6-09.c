#include <stdio.h>

int main() {
    int i, num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    for(i = 0 ; i < num ; i++) {
        if(num % (i + 1) == 0) printf("%d ", i + 1);
    }
    return 0;
}