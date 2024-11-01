//7. Insert an element at a specific position in the array.
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

    int pos, element;
    printf("\nEnter the position of element to be inserted: ");
    scanf("%d", &pos);

    

    if(pos<0 || pos>limit){
        printf("invalid position.");
    }else{
        printf("Enter the element to be inserted: ");
        scanf("%d", &element);

        limit++;  

        for (i = pos +1 ; i < limit; i++) {
        arr[i] = arr[i - 1];
        }

        arr[pos] = element;
        printf("New array: ");
        for (i = 0; i < limit; i++) {
            printf("%d ", arr[i]);
        
        }
    }
 
    return 0;
}   