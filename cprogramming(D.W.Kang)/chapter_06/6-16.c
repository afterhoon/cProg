#include <stdio.h>
int main() {
    int def, en, rem;
    printf("초기연료량: ");
    scanf("%d", &def);
    rem = def;
    while(rem > 0) {
        printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
        scanf("%d", &en);
        rem += en;
        printf("현재 남아있는 양은 %lf입니다.\n", (double)rem);
        if((def/10) >= (int)rem) {
            printf("(경고) 연료가 10퍼센트이하입니다.\n");
        }
    }
    return 0;
}