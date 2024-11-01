//1. Find the frequency of all elements in the array.
#include <stdio.h>

int main() {
    int i, j, limit;

    printf("Enter number of elements in the array: ");
    scanf("%d", &limit);

    int arr[limit];
    int visited[limit];

    printf("Enter elements in the array:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
        visited[i] =0;
    }

    printf("Array: ");
    for (i = 0; i < limit; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(i=0; i<limit; i++){
        if(!visited[i]){
            int frequency =1;
            for(j=i+1; j<limit; j++){
                if(arr[i] == arr[j]){
                    frequency++;
                    visited[j] =1;
                }
            }
            printf("The element %d repeats %d times\n", arr[i], frequency);
        }
    } 

    return 0;
}