//4. Remove duplicates from the array.
#include <stdio.h>
int main(){
    
    int i,j,limit;

    printf("Enter the number of elements: ");
    scanf("%d", &limit);
    
    int arr[limit];
    printf("Enter the elements: ");
    for(i=0; i<limit; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for(i=0; i<limit; i++){
        printf("%d ", arr[i]);
    }

    int newArray[limit];
    int newCount = 0;

    for(i=0; i<limit; i++){
        int isDublicate = 0;
        for(j=i+1; j<limit; j++){
            if(arr[i] == arr[j]){
                isDublicate = 1;
                break;
            }
        }
        if(!isDublicate){
            newArray[newCount] = arr[i];
            newCount++;
        }
    }
    printf("\nNew array: ");
        for(i=0; i<newCount; i++){
            printf("%d ", newArray[i]);
        }


    return 0;
}