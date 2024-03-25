// Напишите функцию Bool difSign(int32_t a, int32_t b), которая возвращает истину, 
// если знаки двух заданных 32 битных чисел разные. Использовать операции сравнения запрещено.
#include "00.c"

_Bool difSign(int32_t a, int32_t b)
{
    a = a >> 31;
    b = b >> 31;
    return (a ^ b);
}

int main(int argc, char const *argv[])
{
    int32_t a = 256;
    int32_t b = 1;
    (difSign(a, b))?printf("True\n"):printf("False\n");
    return 0;
}