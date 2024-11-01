//2. Write a C program that prompts the user to input a series of integers until the user stops by entering 0
// using a do-while loop. Calculate and print the sum of all positive integers entered.
#include <stdio.h>
int main(){
    int num, sum = 0;
    do{
        printf("Enter the integer: ");
        scanf("%d", &num);
        
        if(num > 0){
            sum += num;
        }else if (num < 0){
            printf("Negative numbers are ignored.\n");
        }
    } while (num != 0);
        printf("Sum: %d", sum);
    
    return 0;
    
}