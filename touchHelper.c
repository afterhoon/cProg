#include <stdio.h>
int main() {
    int i, chapter, problem;
    char ch;
    printf("몇 장 입니까: ");
    scanf("%d", &chapter);
    printf("몇 번 문제까지 있습니까: ");
    scanf("%d", &problem);
    printf("파일의 확장자는 무엇입니까: ");
    scanf(" %c", &ch);
    
    printf("touch ");
    for(i = 0 ; i < problem ; i++) {
        printf("%d-%02d.%c ", chapter, i + 1, ch);
    }
    printf("\n");
    return 0;
}