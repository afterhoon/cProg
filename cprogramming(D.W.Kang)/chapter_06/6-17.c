#include <stdio.h>
int main() {
    int num, isPrime, i;
    num = 0, isPrime = 1;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    
    if(num == 1) isPrime = 0;
    else if (num == 2) isPrime = 1;
    else {
        for(i = 2 ; i < num ; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    printf("%d는 소수가 ", num);
    if(isPrime) printf("맞습니다.\n");
    else printf("아닙니다.\n");
    return 0;
}