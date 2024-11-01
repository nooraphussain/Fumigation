//4. Sort the elements of the array in ascending order.
#include <stdio.h>

int main(){

    int i,j, limit, temp;

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

    for(i=0; i<limit; i++){
        for(j=i+1; j<limit; j++){
            if(arr[i]> arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }

    printf("\nSorted array: ");
    for(i=0; i<limit; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}    