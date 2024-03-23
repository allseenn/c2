#include "00.c"
# define TYPE PRId8
typedef uint8_t type;

type a = 60; /* 60 = 0011 1100 */
type b = 13; /* 13 = 0000 1101 */
type c = 0;

int main(int argc, char const *argv[])
{
    printf("uint%i_t a = %"TYPE"\t", sizeof(a)*8, a); printBits(a); printf("\n");
    printf("uint%i_t a = %"TYPE"\t", sizeof(b)*8, b); printBits(b); printf("\n");

    c = a & b; 
    printf("Line 1 c = %"TYPE"\t", c ); /* 12 = 0000 1100 */
    printBits(c); printf("\n");

    c = a | b;
    printf("Line 2 c = %"TYPE"\t", c ); /* 61 = 0011 1101 */
    printBits(c); printf("\n");

    c = a ^ b;
    printf("Line 3 c = %"TYPE"\t", c ); /* 49 = 0011 0001 */
    printBits(c); printf("\n");

    c = ~a;
    printf("Line 4 c = %"TYPE"\t", c );  /*-61 = 1100 0011 */
    printBits(c); printf("\n");

    c = a << 2;
    printf("Line 5 c = %"TYPE"\t", c ); /* 240 = 1111 0000 */
    printBits(c); printf("\n");

    c = a >> 2;
    printf("Line 6 c = %"TYPE"\t", c ); /* 15 = 0000 1111 */
    printBits(c); printf("\n");

    return 0;
}

