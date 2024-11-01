//4. Find the second smallest element in the array without sorting (Assume no elements are repeating)
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

    int secondSmallest = arr[1];
    int smallest = arr[0];
 
    for(i=0; i<limit; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]> smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }

    printf("\nsmallest: %d ", smallest);
    printf("\nsecond smallest: %d ", secondSmallest);


    return 0;
}   