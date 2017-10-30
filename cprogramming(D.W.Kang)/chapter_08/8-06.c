#include <stdio.h>

int ipower(int n, int k) {
    int i, pow = 1;
    for(i = 1 ; i <= k ; i++) {
        pow *= n;
    }
    return pow;
}

void printPow(int n, int k) {
    int i;
    for(i = 0 ; i <= k ; i++)
        printf("%d\n", ipower(n,i));
}

int main() {
    printPow(3, 5);
    return 0;
}