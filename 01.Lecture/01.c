#include<stdio.h>
#include<stdint.h>
int main()
{
    int32_t x=3, y=8;
    (x&y)?printf("True\n"):printf("False\n");
    (x&&y)?printf("True\n"):printf("False\n");
    return 0;
}
