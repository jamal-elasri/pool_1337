char *ft_strncpy(char *dest , char *src, int unsigned n ){
    int i = 0 ;
    while (i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++; 
    }

    while(i < n){
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

