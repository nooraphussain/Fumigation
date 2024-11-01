// 5. Write a C program that calculates and prints the sum of cubes of even numbers 
//up to a specified limit (e.g., 20) using a while loop.
#include <stdio.h>
int main(){
    int i=1, sum= 0 ;

    while (i<=20){
        if(i % 2 == 0){
            sum += (i*i*i);
        }
        i++;
    }
    printf("sum: %d", sum);
    return 0;
}