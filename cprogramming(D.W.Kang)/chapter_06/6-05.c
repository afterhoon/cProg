#include <stdio.h>

int main() {
    int i, j;
    int num = 7;
    for(i = 0 ; i < num ; i++) {
        for(j = 0 ; j < num ; j++) {
            if(i + 1 > j) printf("%d", j + 1);
            else printf("*");
        }
        printf("\n");
    }
}