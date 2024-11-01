#include <stdio.h>

int main(){
    int a = 10,b,c;
    b = a++;
    printf("a = %d\n",a);
    c = ++a;

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);

    int x = 5;
    int y = ++x;
    int z = x++;
    printf("%d %d %d\n", x, y, z);

    return 0;
}