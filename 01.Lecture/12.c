#include "00.c"

typedef int (*comparator_type)(const void *, const void *);
/* сравнение двух целых V2 */
int comparator(const int *a, const int *b)
{
    return *a - *b;
}

int main(void)
{
    int a[3] = {3, 1, 2};
    qsort(a, 3, sizeof(int), (comparator_type)comparator);
    printf("%d,%d,%d", a[0], a[1], a[2]);
}