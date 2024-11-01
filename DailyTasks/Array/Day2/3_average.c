//3. Calculate the average of all elements in the array.
#include <stdio.h>
int main(){

    int i, limit;

    printf("Enter number of elements in the array: ");
    scanf("%d", &limit);

    int arr[limit];

    printf("Enter elements in the array:\n");
    for(i=0; i<limit; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for(i=0; i<limit; i++){
        printf("%d ", arr[i]);
    }

    int sum = 0;
    float average;

    for(i=0; i<limit; i++){
        sum += arr[i];
    }

    average =(float) sum/limit;

    printf("\nAverage of the elements is: %.1f ", average);


    return 0;
}    