#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int *arr;
    int i;

    if (min == max)
    {
        *range = NULL;
        return 0;
    }

    size = max - min;
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        return -1;
    }

    i = 0;

    while (i < size)
    {
        arr[i] = min++;
        i++;
    }
    
    *range = arr;

    return (size);
}