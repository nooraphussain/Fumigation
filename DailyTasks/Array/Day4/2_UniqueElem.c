//2. Find unique elements in an array
#include <stdio.h>
int main(){
    int i,j,limit, isUnique;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &limit);

    int array[limit];
    printf("Input elements in the array : \n");
    for(i=0; i<limit;i++){
        scanf("%d", &array[i]);
    }

    printf("The unique elements found in the array are: ");
    for(i=0; i<limit; i++){
        isUnique = 1;
        for(j=0; j<limit; j++){
            if(i !=j && array[i] == array[j]){
                isUnique = 0;
                break;
            }
        }
        if(isUnique){
            printf("%d ", array[i]);
        }
    }


    return 0;
}