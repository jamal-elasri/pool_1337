char *ft_strstr(char *str, char *to_find){
    int i , j;

    if(to_find[0] == '\0'){
        return str;
    }

    i = 0;
    while (str[i]){
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j]){
            j++;
        }
        if (to_find[j] == '\0'){
            return &str[i];
        }
        i++;
    }
    return 0;
}
