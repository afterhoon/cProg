#include <stdio.h>

int main() {
    int n, m;
    int i, j;
    n = 3, m = 5;
    
    for(i = 0 ; i < 100 ; i++) {
        if((i + 1) % (n * m) == 0) printf("%d ", i + 1);
    }
    printf("\n");
    return 0;
}