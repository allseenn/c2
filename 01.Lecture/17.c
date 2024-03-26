#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t mytime = time(NULL);
    struct tm *now = localtime(&mytime);
    printf("Date: %d.%d.%d\n", now->tm_mday,
           now->tm_mon + 1, now->tm_year + 1900);
    printf("Time: %d:%d:%d\n", now->tm_hour,
           now->tm_min, now->tm_sec);

    double DELAY = 3;
    clock_t begin = clock();
    while((double)(clock() - begin)/CLOCKS_PER_SEC<DELAY)
        {/*printf("%4d\n",clock());*/ }
    printf("Hello World %ld",CLOCKS_PER_SEC);

    return 0;
}