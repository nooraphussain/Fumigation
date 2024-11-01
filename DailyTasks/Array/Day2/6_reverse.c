// 6. Reverse the elements of the array.
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

    printf("\nArray reversed: ");
    for(i=limit-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}