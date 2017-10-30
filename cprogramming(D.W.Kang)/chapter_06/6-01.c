#include <stdio.h>

int main() {
    int count = 60;
    while(count >= 0) {
        printf("%d ", count--);
    }
    printf("\n");
    printf("발사\n");
    return 0;
}