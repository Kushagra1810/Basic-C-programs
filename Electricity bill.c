#include <stdio.h>

int main() {
    int units;
    float cost_unit, surcharge, total_bill;

    printf("Enter no. of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        cost_unit = 300;
        surcharge = 0;
    }
    else if (units <= 300) {
        cost_unit = 500;
        surcharge = 180;
    }
    else if (units <= 500) {
        cost_unit = 700;
        surcharge = 200;
    }
    else {
        cost_unit = 1000;
        surcharge = 300;
    }

    total_bill = cost_unit + surcharge;

    printf("\n...Electricity bill...\n");
    printf("Units consumed: %d\n", units);
    printf("Unit Cost: %.2f\n", cost_unit);
    printf("Surcharge: %.2f\n", surcharge);
    printf("Total Bill: %.2f\n", total_bill);

    return 0;
}