//3. Find array elements that occur exactly three times
#include <stdio.h>

int main() {
    int i, j, limit, count = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &limit);

    int arr[limit];
    int visited[limit];

    printf("Enter elements in the array:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    printf("Array: ");
    for (i = 0; i < limit; i++) {
        printf("%d ", arr[i]);
    }

    int newArray[count];
    printf("\nElements that occur exactly three times:\n");
    for (i = 0; i < limit; i++) {
        int occurrence = 0;
        if (!visited[i]) {
            for (j = i + 1; j < limit; j++) {
                if (arr[i] == arr[j]) {
                    occurrence++;
                    visited[j] = 1;
                }
            }
            if (occurrence == 2) { // Check for 2 occurrences (excluding the current element)
                count++;
                newArray[count - 1] = arr[i];
            }
        }
    }

    if (count == 0) {
        printf("There's no element that occurs exactly three times.");
    } else {
        for (i = 0; i < count; i++) {
            printf("%d ", newArray[i]);
        }
    }

    return 0;
}