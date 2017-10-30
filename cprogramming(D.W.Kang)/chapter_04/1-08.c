#include <stdio.h>

int main() {
    double AC, AE, BC, DE;
    printf("AC: ");
    scanf("%lf", &AC);
    printf("AE: ");
    scanf("%lf", &AE);
    printf("BC: ");
    scanf("%lf", &BC);
    DE = AE * BC / AC;
    printf("DE: %lf\n", DE);
}