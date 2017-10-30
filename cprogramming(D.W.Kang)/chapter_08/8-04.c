#include <stdio.h>

void get_divisor(int num) {
    int i;
    printf("%d의 약수: ", num);
    for(i = 1 ; i <= num ; i++)
        if(num % i == 0)
            printf("%d ", i);
    printf("\n");
}

int main() {
    get_divisor(8);
    return 0;
}