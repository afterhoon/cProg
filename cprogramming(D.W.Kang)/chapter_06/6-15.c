#include <stdio.h>

int main() {
    int cnt;
    char ch;
    cnt = 0;
    do {
        printf("문자를 입력하시오: ");
        scanf(" %c", &ch);
        if(ch == 'a') {
            cnt++;
        }
    }
    while(ch != '.');
    printf("a의 개수=%d\n", cnt);
    return 0;
}