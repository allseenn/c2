#include"00.c"
int main()
{
    int32_t x=3, y=1;
    printf("x = %d = ", x);
    printBits(x);
    printf("y = %d = ", y);
    printBits(y);
    int32_t z = x & y;
    printf("z = %d = ", z);
    printBits(z);
    (z)?printf("True\n"):printf("False\n");
    (x&&y)?printf("True\n"):printf("False\n");
    return 0;
}
