//4. Write a C program that prompts the user to input a series of numbers until they input a duplicate number.
// Use a while loop to check for duplicates.
#include <stdio.h>

int main() {
    int n, previousNumbers[100], index = 0, product = 1;

    while (1) {
        printf("Enter the input: ");
        scanf("%d", &n);

        // Check for duplicates
        for (int i = 0; i < index; i++) {
            if (n == previousNumbers[i]) {
                printf("Duplicate found: %d\n", n);
                return 0; // Exit the program
            }
        }

        // Store the number
        previousNumbers[index] = n;
        index++;

    }

    printf("Product: %d\n", product);

    return 0;
}