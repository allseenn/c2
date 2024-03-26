#include "00.c"

int main()
{
    int find_odd_element(int32_t arr[], size_t n)
    {
        int32_t res = 0;
        for (size_t i = 0; i < n; i++)
        {
            res ^= arr[i];
        }
        return res;
    }
    
    int32_t arr[] = {1, 4, 4, 6, 6, 8, 8, 9, 9};
    printf("%"PRId32"\n", find_odd_element(arr,sizeof(arr)/sizeof(int32_t)));
    return 0;
}
