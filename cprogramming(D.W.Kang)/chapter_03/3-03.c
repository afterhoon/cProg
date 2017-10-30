#include <stdio.h>
int main() {
   double x;
   
   printf("면적을 제곱미터 단위로 입력하시오: ");
   scanf("%lf", &x);
   printf("%lf 제곱미터는 %lf평입니다.\n", x, x*3.3058);
   return 0;
}