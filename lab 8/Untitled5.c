#include <stdio.h>

struct InventoryItem {
    char itemName[50];
    int quantity;
    float rate;
    float amount;
};

int main() {
    // Declare an array of structures for the inventory items
    struct InventoryItem items[3];

    // Open the file in read mode ("r")
    FILE *filePointer = fopen("inventory.txt", "r");

    // Check if the file is opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Read data from the file
    for (int i = 0; i < 3; i++) {
        fscanf(filePointer, "%s %d %f", items[i].itemName, &items[i].quantity, &items[i].rate);

        // Calculate the amount
        items[i].amount = items[i].quantity * items[i].rate;
    }

    // Close the file
    fclose(filePointer);

    // Print details with amounts
    printf("ItemName\tQuantity\tRate\tAmount\n");
    printf("-----------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%s\t\t%d\t\t%.2f\t%.2f\n", items[i].itemName, items[i].quantity, items[i].rate, items[i].amount);
    }

    return 0;
}

