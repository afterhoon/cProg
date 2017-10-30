#include <stdio.h>

int main() {
    int num, i;
    printf("몇 번이나 반복할까요?: ");
    scanf("%d", &num);
    for(i = 0 ; i < num ; i++)
        printf("안녕하세요?\n");
}