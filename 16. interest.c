#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter Principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (R): ");
    scanf("%f", &rate);

    printf("Enter Time period in years (N): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("fSimple Interest (I) = %f\n", interest);

    return 0;
}

