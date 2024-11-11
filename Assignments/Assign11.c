#include <stdio.h>

int main() {
    int limit;

    printf("Enter the size of Array: ");
    scanf("%d", &limit);

    int array[limit];

    printf("Enter values of Array :\n");
    for (int i = 0; i < limit; i++) {
        scanf("%d", &array[i]);
    }


    int count = 0;
    for (int i = 0; i < limit; i++) {
        if( array[i] % 2 == 0){
            count ++;
        }
    }
    

    printf("Number of even numbers in the given array is : %d", count);
    
    return 0;
}
