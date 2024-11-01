//5. Find the average of odd elements in the array.
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

    int sum = 0, oddCount = 0;
    float average;

    for(i=0; i<limit; i++){
        if(arr[i] %2 != 0){
            sum += arr[i];
            oddCount ++;
        }
    }

    average =(float) sum/oddCount;

    printf("\nAverage of the even elements is: %.1f ", average);

    return 0;
}   