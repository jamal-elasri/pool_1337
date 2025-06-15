unsigned int ft_strlcpy(char *src, char *dest, unsigned int size){
    unsigned int src_len = 0;
    int i = 0;

    while(src[i]){
        src_len++;
        i++;
    }
    if (size == 0){
        return src_len;
    }

    i = 0;
    while(src[i] && i < size - 1){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return src_len;
}

