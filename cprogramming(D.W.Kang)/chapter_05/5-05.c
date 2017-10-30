#include <stdio.h>

int main() {
    int money, temp, result;
    printf("과세 표준을 입력하시오(만원): ");
    scanf("%d", &money);
    
    temp = money;
    result = 0;
    if(money > 8000) {
        result += (temp - 8000) * 0.35;
        temp = 8000;
    }
    if(money > 4000) {
        result += (temp - 4000) * 0.26;
        temp = 4000;
    }
    if(money > 1000) {
        result += (temp - 1000) * 0.17;
        temp = 1000;
    }
    result += temp * 0.08;
    
    printf("소득세는 %d만원입니다.\n", result);
    
    return 0;
}