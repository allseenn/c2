#include "00.c"

int main()
{
    uint8_t x=0xf5;// 1111 0101
    printf("x = 0x%"PRIX8" = ", x);
    printBits(x); printf("\n");
    x>>=1;
    printf("x = 0x%"PRIX8" = ", x);
    printBits(x); printf("\n");
    return 0;
}
