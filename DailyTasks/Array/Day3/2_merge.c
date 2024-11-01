// 2. Merge two arrays into a third array.
#include <stdio.h>
int main(){
    int i,j, limit1;
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &limit1);

    int array1[limit1];
    printf("Input elements in the array1: ");
    for(i=0; i<limit1; i++){
        scanf("%d", &array1[i]);
    }

    int limit2;
    printf("Input the number of elements to be stored in the second array : ");
    scanf("%d", &limit2);

    int array2[limit2];
    printf("Input elements in the array2: ");
    for(j=0; j<limit2; j++){
        scanf("%d", &array2[j]);
    }

    //merging
    int limit3 = limit1 + limit2;
    int mergedArray[limit3];

    for(i=0; i<limit1; i++){
        mergedArray[i] = array1[i];
    }for(j=0; j<limit2; j++){
        mergedArray[i] = array2[j];
        i++;
    }

    //printing merged array
    printf("Merged array: ");
    for(i=0; i<limit3; i++){
        printf("%d ", mergedArray[i]);
    }
 
    return 0;
}   