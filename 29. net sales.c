#include <stdio.h>

int main() {
    float a, b, c, d;
    // a=grossSales, b=discount, c=netSales;

    printf("Enter Gross Sales: ");
    scanf("%f", &a);

    if (a > 20000)
    {
        b = 0.15;
    }
    if (a > 10000)
    {
        b = 0.10;
    }
    else
    {
        b = 0.05;
    }

    c=a-b

   printf("netsales=%f,a);

    return 0;
}
