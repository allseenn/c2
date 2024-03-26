#include "00.c"

int main()
{
    int8_t x=0xf5;// 1111 0101
    
    printf("x = 0x%"PRIX8" = ", x);
    printBits(x);

    x>>=1;
    
    printf("x = 0x%"PRIX8" = ", x);
    printBits(x); 
    return 0;
}
