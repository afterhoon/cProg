#include <stdio.h>

int main() {
    int mid, final, avg;
    printf("중간 고사 점수를 입력하시오: ");
    scanf("%d", &mid);
    printf("기말 고사 점수를 입력하시오: ");
    scanf("%d", &final);

    avg = (mid + final) / 2;
    printf("당신의 학점은 ");
    switch(avg/10) {
        case 9: printf("A"); break;
        case 8: printf("B"); break;
        case 7: printf("C"); break;
        case 6: printf("D"); break;
        default: printf("F");
    }
    printf("학점입니다.\n");
    return 0;
}