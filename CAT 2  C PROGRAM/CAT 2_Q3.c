#include <stdio.h>

int main() {
    float hours;
    float hourlywage;
    grosspay;
    taxes;
    netpay;
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourlywage: ");
    scanf("%f", &hourlywage);

    if (hours > 40) {
        grosspay = (40 * hourlywage) + ((hours - 40) * hourlywage * 1.5);
    } else {
        grosspay = hours * hourlywage;
    }

    if (grosspay <= 600) {
        taxes = grosspay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grosspay - 600) * 0.20);
    }

    netpay = grosspay - taxes;

    printf("Gross pay: $%.2f\n", grosspay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net pay: $%.2f\n", netpay);

    return 0;
}