//2. Find the smallest element in the array.
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

    int smallest = arr[0];

    for(i=1; i<limit; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }   

    printf("\nsmallest element: %d ", smallest); 


    return 0;
}    