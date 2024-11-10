#include <stdio.h>

int main() {
    int limit1, limit2;

    printf("Enter the size of Array 1: ");
    scanf("%d", &limit1);

    int array1[limit1];

    printf("Enter values of Array 1:\n");
    for (int i = 0; i < limit1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of Array 2: ");
    scanf("%d", &limit2);

    int array2[limit2];

    printf("Enter values of Array 2:\n");
    for (int i = 0; i < limit2; i++) {
        scanf("%d", &array2[i]);
    }

    // Swapping logic: Make sure the sizes are equal, or adjust the swap logic accordingly
    if (limit1 != limit2) {
        printf("Array sizes are not the same. Swapping not possible.\n");
        return 1;
    }

    int temp[limit1];
    for (int i = 0; i < limit1; i++) {
        temp[i] = array1[i];
    }
    for (int i = 0; i < limit2; i++) {
        array1[i] = array2[i];
    }
    for (int i = 0; i < limit1; i++) {
        array2[i] = temp[i];
    }

    printf("Array 1 after swapping: ");
    for (int i = 0; i < limit1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Array 2 after swapping: ");
    for (int i = 0; i < limit2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
