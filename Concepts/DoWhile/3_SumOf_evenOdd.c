//3. Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops.
#include <stdio.h>
int main(){
    int i = 1;
    int sumEven = 0, sumOdd =0;

    do{
        if(i%2 == 0){
            sumEven += i;
        }else{
            sumOdd += i;
        }
        i++;
    } while (i<=50);
        printf("Sum of even numbers: %d\n", sumEven);
        printf("Sum of odd numbers: %d", sumOdd);        
    
    return 0;
}