#include <stdio.h>

int isPrime(int num) {
    int i, cnt = 0;
    for(i = 2 ; i <= num ; i++) {
        if(num % i == 0)
            cnt++;
    }
    return cnt == 1 ? 1 : 0;
}

int main() {
    int i;
    for(i = 0 ; i <= 100 ; i++) {
        if(isPrime(i)) printf("%d ", i);
    }
    return 0;
}