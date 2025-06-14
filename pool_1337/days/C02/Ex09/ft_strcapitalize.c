char *ft_strlowcase(char *str){
    int i = 0;
    while(str[i]){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        i++;
    }

    return str;
}


char *ft_strcapitalize(char *str){
    int i = 0;
    int x = 1;

    ft_strlowcase(str);
    while(str[i]){
        if (str[i] >= 'a' && str[i] <= 'z'){
            if (x == 1){
                str[i] -= 32;
            }
            x = 0;
        }

        else if (str[i] >= '0' && str[i] <= '9'){
            x = 0;
        }
        else{
            x = 1;
        }
        i++;
    }
    return str;
}

