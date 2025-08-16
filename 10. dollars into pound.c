#include <stdio.h>

int main() {
    float dollars, rupees, pounds;
    const float dollarToRupee = 48.0;
    const float poundToRupee = 70.0;

    // Ask user for dollar amount
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to rupees
    rupees = dollars * dollarToRupee;

    // Convert rupees to pounds
    pounds = rupees / poundToRupee;

    // Display result
    printf("%.2f dollars is equivalent to %.2f pounds.\n", dollars, pounds);

    return 0;
}
