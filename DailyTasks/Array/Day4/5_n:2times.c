//5. Find the element that appears more than n/2 times in the array.
#include <stdio.h>

int main() {
    int limit;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &limit);

    if (limit <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[limit];
    printf("Enter the elements:\n");
    for (int i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
    }

    int targetCount = limit / 2;
    int found = -1; // Variable to store the element that might appear more than n/2 times

    // Check each element for its frequency
    for (int i = 0; i < limit; i++) {
        int count = 0;
        for (int j = 0; j < limit; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > targetCount) {
            found = arr[i];
            break; // Found an element, exit the loop
        }
    }

    if (found != -1) {
        printf("Element that appears more than n/2 times: %d\n", found);
    } else {
        printf("No element appears more than n/2 times.\n");
    }

    return 0;
}
