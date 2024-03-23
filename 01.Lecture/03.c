#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main()
{
    int8_t x=0xf5;// 1111 0101
    x>>=1;
    printf("x = 0x%"PRIX8"\n", x);
    return 0;
}
