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
    // (-1)^sign * 1.mantissa * 2^(exp - bias)
    float restore = ldexpf((float)f.bit.mant / (1 << 23), f.bit.exp - 129);
    if (f.bit.sign) restore = -restore;
    printf("%f\n", restore);
    return 0;
}