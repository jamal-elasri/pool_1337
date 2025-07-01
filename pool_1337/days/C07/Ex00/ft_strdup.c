#include <stdlib.h>

int ft_strlen(char *src){
    int i = 0;
    while (src[i]){
        i++;
    }
    return (i);
}


char *ft_strdup(char *src){
    int i = 0; 
    int len = ft_strlen(src);
    char *dup = (char *)malloc((len + 1) * sizeof(char));

    if (dup == NULL)
       return 0;

    while (src[i]){
        dup[i] = src[i];
        i++;
    }

    dup[i] = '\0';
    return (dup);
}

