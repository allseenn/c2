#include<stdio.h>
#include<stdint.h>
#include"00.c"
int main()
{
    int32_t x=3, y=1;
    printBits(x);
    printf("\n");
    printBits(y);
    printf("\n");
    int32_t z = x & y;
    printBits(z);
    printf("\n");
    (z)?printf("True\n"):printf("False\n");
    (x&&y)?printf("True\n"):printf("False\n");
    return 0;
}
