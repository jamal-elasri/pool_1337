#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int size; 
    int i;
    
    if ( min >= max )
    {
        return (NULL);
    }

    size = max - min;
    range = (int *)malloc( size * sizeof(int));
    if ( range == NULL)
    {
        return (NULL);
    }

    i = 0;
    while ( i < size){
        range[i] = min + i;
        i++;
    }

    return (range);

}
