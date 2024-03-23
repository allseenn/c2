// Напишите функцию _Bool isEqual(int a, int b). Которая, проверяет без
// использования арифметических операторов и операторов сравнения, равны ли два числа.
#include <stdio.h>

_Bool isEqual(int a, int b)
{
   return !(a ^ b);
}

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 3;
    (isEqual(a, b))?printf("%i equals %i\n", a, b):printf("%i not equals %i\n", a, b);
    return 0;
}
