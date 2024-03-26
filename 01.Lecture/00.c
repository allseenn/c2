#include <stdio.h>
#include<stdint.h>
#include<inttypes.h>
#ifdef _WIN32
#include <windows.h>
SetConsoleOutputCP(1251);
#endif

void printBits(int x)
{   
    char size = 32;
    if(((INT32_MAX+1)&x)==0){
        if(x<=INT16_MAX) size = 16;
        if(x<=INT8_MAX) size = 8;
        if(x<=15) size = 4;
    }else{
        printf("-");
        if(x>INT16_MIN) size = 16;
        if(x>INT8_MIN) size = 8;
        if(x>-16) size = 4;
    }
    for(int i=size; i; i--){
        putchar('0'+((x>>(i-1))&1));
        if(i==0)
            break;
    }
    printf("\n");
}


// int main(int argc, char const *argv[])
// {
//     int a = -10;
//     printBits(a);

//     printf("\n%i", INT8_MIN);
//     return 0;
// }



