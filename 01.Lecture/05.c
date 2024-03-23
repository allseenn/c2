#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    int find_odd_element(int32_t arr[], size_t n)
    {
        int32_t res = 1;
        for (size_t i = 0; i < n; i++)
        {
            if (res % arr[i] == 0) 
                res /=  arr[i];
            else res *= arr[i];
        }
        return res;
    }
    
    int32_t arr[] = {3, 3, 4, 4, 6, 6, 5, 8, 8, 9, 9};
    printf("%"PRId32"\n", find_odd_element(arr, sizeof(arr)/sizeof(int32_t)));
    return 0;
}
