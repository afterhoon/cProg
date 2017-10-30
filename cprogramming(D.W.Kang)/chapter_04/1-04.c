#include <stdio.h>

int main() {
    int num, temp, hund, ten, one;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    temp = num;

    hund = temp / 100;
    temp -= hund * 100;
    ten = temp / 10;
    temp -= ten * 10;
    one = temp;
    
    printf("백의 자리수: %d\n", hund);
    printf("십의 자리수: %d\n", ten);
    printf("일의 자리수: %d\n", one);
    
    return 0;
}