#include <stdio.h>
int main() {
    int i;
    printf("\t10진수\t8진수\t16진수\n");
    for(i = 0 ; i < 5 ; i++) {
        printf("%3c:\t%d\t%d\t%d\n", 'a' + i, 'a' + i, 'a' + i, 'a' + i);
    }
    return 0;
}