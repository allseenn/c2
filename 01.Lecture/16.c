#include <stdio.h>

size_t strlenutf8(char *s)
{
    size_t length = 0;
    while (*s)
    {
        if ((*s & 0b11000000) != 0b10000000)
        {
            ++length;
        }
        ++s;
    }
    return length;
}

int main()
{
    char s[] = "Привет";
    char s2[] = "Hello";
    printf("len s = %zu\n", strlenutf8(s));
    printf("len s2 = %zu\n",
           strlenutf8(s2));
    return 0;
}