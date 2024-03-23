#include<stdio.h>

struct MyDate
{
    unsigned char day: 5;
    unsigned char month: 4;
} date;

int main()
{
    printf("%i\n", sizeof(date)); 
    return 0;
}