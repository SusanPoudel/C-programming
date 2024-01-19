//An electricity board charges the following rates for the use of electricity:
//For the first 200 units: 80 paisa per unit
//For the next 100 units: 90 paisa per unit
//Beyond 300 units : Rs.1 per unit
//All the users are charged a minimum of Rs. 100 as meter charge. If the total amount is more thanRs. 400, then an additional surcharge of 15% of total amount is charged.
//WAP to read the names of users and number of units consumed and print them along with the amount to be paid.

#include <stdio.h>

int main() {
    char name[50];
    int units;
    float totalAmount, surcharge;

    // take input from user
    printf("Enter the name of the user: ");
    scanf("%s", name);

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate amount based on the given rates
    if (units <= 200) {
        totalAmount = 100 + units * 0.8;
    } else if (units <= 300) {
        totalAmount = 100 + 200 * 0.8 + (units - 200) * 0.9;
    } else {
        totalAmount = 100 + 200 * 0.8 + 100 * 0.9 + (units - 300);
    }

    // Check if the total amount is more than Rs. 400 for surcharge
    if (totalAmount > 400) {
        surcharge = 0.15 * totalAmount;
        totalAmount += surcharge;
    }

    // Print the user details and amount to be paid
    printf("\nUser Details:\n");
    printf("Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Amount to be Paid: Rs. %.2f\n", totalAmount);

    return 0;
}

//OUTPUT
//------------
//Enter the name of the user: susan
//Enter the number of units consumed: 1
//
//User Details:
//Name: susan
//Units Consumed: 1
//Amount to be Paid: Rs. 100.80
//
//--------------------------------


