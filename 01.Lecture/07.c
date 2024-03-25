#include "00.c"

struct MyDate
{
    unsigned char day : 5;
    unsigned char month : 4;
} date;

union FloatBit
{
    float value;
    struct
    {
        uint32_t mant : 23;
        uint32_t exp : 8;
        uint32_t sign : 1;
    } bit;
} f;

int main()
{
    printf("%i\n", sizeof(date));

    f.value = -4.1;
    printf("Memory size is %lu\n", sizeof(f));
    printf("f.value = %f\n", f.value );
    printf("sign = %d\n", f.bit.sign);
    printf("exp = %d\n", f.bit.exp);
    printf("mantissa = %d\n", f.bit.mant);

    return 0;
}