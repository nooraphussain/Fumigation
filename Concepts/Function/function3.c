#include <stdio.h>

//with arg, with return value
int sum(int,int); 

int sum(int num1, int num2){
    int  sum;
    sum = num1 + num2;
    return sum;
}

int main(void) {

    int a,b,c;

    printf("Enter two numbers: "); 
    scanf("%d%d", &a, &b);

    c = sum(a,b); 
    printf("Sum: %d", c);
    return 0; 
}
 