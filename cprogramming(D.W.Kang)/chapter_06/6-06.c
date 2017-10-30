#include <stdio.h>

int main() {
    int n = 3;
    int i;
    for(i = 0 ; i < 100 ; i++) {
        if((i + 1) % 3 == 0) printf("%d ", i + 1);
    }
    printf("\n");
    return 0;
}