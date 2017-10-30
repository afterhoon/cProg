#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int init, goal, cash, bets, win;
    srand((unsigned int)time(NULL));
    
    printf("초기 금액 $");
    scanf("%d", &init);
    printf("목표 금액 $");
    scanf("%d", &goal);
    
    cash = init;
    bets = 0;
    win = 0;
    while(cash >= 0 && cash <= goal) {
        bets++;
        if ((double)rand()/RAND_MAX < 0.5) {
            cash++;
            win++;
        }
        else cash--;
    }
    
    printf("%d 중의 %d번 승리\n", bets, win);
    printf("이긴 확률=%lf\n", (double)win/bets * 100);
    return 0;
}