#include <stdio.h>

int main() {

    int i,limit, a[limit];

    printf("Enter array limit: ");
    scanf("%d", &limit);

    printf("Enter values: ");

    // scanf("%d%d%d%d%d", &a[0],  &a[1], &a[2], &a[3], &a[4]);

    for(i=0; i<limit; i++){
        scanf("%d", &a[i]);
    }

    printf("Entered values are: ");

    for(i=0; i<limit; i++){
        printf("%d  ", a[i]);
    }

    //finding sum

    int sum = 0;

    for(i=0; i<limit; i++){
        sum += a[i];
    }
    printf("\nSum is: %d", sum);

    //search

    int searchKey, flag=0;

    printf("\nEnter array Search key: ");
    scanf("%d", &searchKey);
    
    for(i=0; i<limit; i++){
        if(searchKey == a[i]){
            printf("The search key is at %dth position", i+1);
            flag = 1;
            break;
        }
    }

    if (!flag){
        printf("This search key is not in the array");
    }

    //sort

    int j,temp;

    for(i=0; i<limit-1 ; i++){
        for(j=i+1; j<limit; j++){
                if(a[i]>a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        }
    }
    printf("\nSorted array: ");

    for(i=0; i<limit; i++){
        printf("%d  ", a[i]);
    }

    return 0;
}  