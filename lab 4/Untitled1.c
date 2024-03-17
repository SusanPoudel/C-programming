#include <stdio.h>

int main() {
    // Initialize a 1-D array with four integers at compile time
    int arr[] = {10, 20, 30, 40};

    // Display each element with its array index without using a loop
    printf("Element at index 0: %d\n", arr[0]);
    printf("Element at index 1: %d\n", arr[1]);
    printf("Element at index 2: %d\n", arr[2]);
    printf("Element at index 3: %d\n", arr[3]);

    return 0;
}

