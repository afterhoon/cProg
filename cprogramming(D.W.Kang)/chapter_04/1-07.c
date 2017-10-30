#include <stdio.h>
#define PI 3.141592

int main() {
    double radius, apparent, volume;
    printf("반지름의 길이: ");
    scanf("%lf", &radius);
    apparent = 4 * PI * radius*radius;
    volume = 4 / 3 * PI * radius*radius*radius;
    printf("구의 표면적: %lf\n", apparent);
    printf("구의 체적: %lf\n", volume);
    return 0;
}