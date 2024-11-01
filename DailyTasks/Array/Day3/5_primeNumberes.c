//5. Find prime numbers in an array
#include <stdio.h>

int main() {
    int i, j, limit, count = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &limit);

    int arr[limit];

    printf("Enter elements in the array:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for (i = 0; i < limit; i++) {
        printf("%d ", arr[i]);
    }

    int primeNum[limit];

    for (i = 0; i < limit; i++) {
        if (arr[i] > 1) { // Exclude 1
            int isPrime = 1;
            for (j = 2; j*j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                primeNum[count++] = arr[i];
            }
        }
    }

    if (count == 0) {
        printf("\nThere are no prime numbers in this array.");
    } else {
        printf("\nPrime numbers are: ");
        for (i = 0; i < count; i++) {
            printf("%d ", primeNum[i]);
        }
    }

    return 0;
}