#include <stdio.h>
#include<stdint.h>
#include<inttypes.h>

void printBits(x)
{
    for(int i=sizeof(x)<<3; i; i--)
        putchar('0'+((x>>(i-1))&1));
}

// int main(int argc, char const *argv[])
// {
//     uint16_t a = 128;
//     printBits(PRId16, a);
//     return 0;
// }
