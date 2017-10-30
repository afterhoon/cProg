#include <stdio.h>

int main() {
    int i, num, bef1, bef2, temp;
    printf("몇번째 항까지 구할까요? ");
    scanf("%d", &num);
    
    bef1 = 0, bef2 = 1;
    for(i = 0 ; i <= num ; i++) {
        if(i == 0) printf("0");
        else if(i == 1) printf("1");
        else {
            printf("%d", bef1+bef2);
            temp = bef2;
            bef2 = bef1 + bef2;
            bef1 = temp;
        }
        printf(", ");
    }
    
    return 0;
}