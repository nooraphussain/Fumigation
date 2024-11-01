//1. Delete two elements after occurrence of a prime number
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not prime
    }
    return 1; // Is prime
}

int main() {
    int n;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Create a new array to hold the modified elements
    int newArr[n];
    int newCount = 0;

    for (int i = 0; i < n; i++) {
        newArr[newCount] = arr[i];
        newCount++;

        // If the current element is prime, skip the next two elements
        if (isPrime(arr[i])) {
            i += 2; // Skip the next two elements
        }
    }

    // Print the new array
    printf("Array after deleting two elements after each prime number:\n");
    for (int i = 0; i < newCount; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    return 0;
}
