#include <stdio.h>

int main(){
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    for(int i=1; i<11; i++){
        int product = i*num;
        printf("%d X %d = %d \n",i, num, product);
    }
    
    return 0;
}