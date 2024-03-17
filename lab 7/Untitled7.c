#include <stdio.h>

// Define a union named Data
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Declare a union variable
    union Data data;

    // Assign values to the union members
    data.intValue = 42;

    // Access and display the value using different members
    printf("Integer Value: %d\n", data.intValue);
    printf("Float Value: %f\n", data.floatValue);  // Accessing the same memory as an integer but interpreting it as a float
    printf("String Value: %s\n", data.stringValue); // Accessing the same memory as an integer but interpreting it as a string

    // Size of the union
    printf("Size of Union Data: %lu bytes\n", sizeof(union Data));

    return 0;
}

