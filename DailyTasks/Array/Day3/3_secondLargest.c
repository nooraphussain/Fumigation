//3. Find the second largest element in the array without sorting (Assume no elements are repeating)
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

    int secondLargest = arr[1];
    int largest = arr[0];
 
    for(i=0; i<limit; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]< largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }

    printf("\nlargest: %d ", largest);
    printf("\nsecond largest: %d ", secondLargest);


    return 0;
}   