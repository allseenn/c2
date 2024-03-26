#include "00.c"

struct s {
    int i;
    float f;
};

int main(int argc, char const *argv[])
{
    struct s st = {1, 2.0};
    struct s* ps;
    ps = &st; //указатель на структуру
    printf("ps -> i = %d\n", ps->i); // обращение к полю через указатель
    printf("(*ps).f = %f\n", (*ps).f); // второй способ обращения к полю через указатель
    return 0;
}

