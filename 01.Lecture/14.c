#include <inttypes.h>
#include <stdio.h>
#include <locale.h> //setlocale()
#include <wchar.h> //«широкие» символы

int main()
{
    setlocale(LC_ALL,"en_US.UTF-8");
    wchar_t str1[] = L"Привет";
    printf("str1 = %S\n", str1);
    printf("sizeof str1 = %lu\n", sizeof(str1));
    char str2[] = "Привет";
    printf("str2 = %s\n",str2);
    printf("sizeof str2 = %lu\n", sizeof(str2));
    char str3[] = "Hello!";
    printf("str3 = %s\n",str3);
    printf("sizeof str3 = %lu\n", sizeof(str3));

    uint8_t ch[] = {0xd0,0x90,0xd0,0x91}; // "АБ"
    uint32_t ch32[] = {0x91d090d0,0}; // "АБ"
    printf("%x %x %x %x = %s\n",ch[0],ch[1],ch[2],ch[3],ch);
    printf("%x = %s\n",ch32[0], ch32);

    return 0;
}

