#include "00.c"

int func(int n)
{
    printf("Hello func %d\n", n);
    return n + 1;
}

int main()
{
    int (*fp)(int);
    fp = func;
    fp(5);
    return 0;
}