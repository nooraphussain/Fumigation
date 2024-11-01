// Write a program in C to read 10 numbers from the keyboard and find their sum and average.
// Test Data :
// Input the 10 numbers :
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000
#include <stdio.h>
int main(){
    int i, sum = 0;
    int arr[10];

    printf("Input the 10 numbers :");
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];   
    }
    
    printf("the 10 numbers are:");
    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }

    float avg = (float) sum/10;
    printf("\nThe sum of 10 no is : %d", sum);
    printf("\nThe Average is : %f", avg);

    return 0;
}