#include <stdio.h>
#include <stdlib.h>

int main() {
    int com, pl;
    
    while(1) {
        com = rand() % 2;
        printf("앞(0) 또는 뒤(1)를 선택하시오(종료는 -1): ");
        scanf("%d", &pl);
        if(pl == - 1) break;
        if(!(pl == 0 || pl == 1)) {
            printf("잘못된 값입니다.\n");
            continue;
        }
        if(pl == com) printf("사용자");
        else printf("컴퓨터");
        printf("가 이겼습니다.\n");
    }
    return 0;
}