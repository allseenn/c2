#include "00.c"

int extractExp(float f)
{
    union
    {
        float f;
        struct
        {
            uint32_t mantissa : 23;
            uint32_t exp : 8;
            uint32_t s : 1;
        } field;
    } fl;
    fl.f = f;
    return fl.field.exp;
}

int main(int argc, char const *argv[])
{
    int f = extractExp(-4.1);
    printf("f = %i\n", f);
    return 0;
}
