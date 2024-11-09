#include <stdio.h>
int main(){
    int limit;

    printf("Enter limit: ");
    scanf("%d", &limit);

    int sum = 0;

    for(int i=0; i<=limit; i++){
        if(i%2 != 0){
            sum+=i;
        }
    }

    printf("Sum of odd numbers = %d", sum);
    return 0;
}