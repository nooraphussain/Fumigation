// 2. Write a C program that prompts the user to input a series of integers until
//  the user stops entering 0 using a while loop.
//  Calculate and print the sum of all the positive integers entered.
#include <stdio.h>
int main(){
    int n, sum = 0;


    while(1){
        printf("Enter the integer: ");
        scanf("%d", &n);

        if(n == 0){
            break;
        }
        if(n > 0){
            sum += n;
        }
    }

    printf("sum: %d", sum);
    
    return 0;
}