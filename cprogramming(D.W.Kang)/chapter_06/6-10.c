#include <stdio.h>

int main() {
    int i;
    printf("===============================\n");
    printf("화씨온도\t섭씨온도\n");
    printf("===============================\n");
    for(i = 0 ; i < 10 ; i++) {
        printf("%d\t\t%d \n", i*10, (int)((i*10-32)/1.8) );
    }
    return 0;
}