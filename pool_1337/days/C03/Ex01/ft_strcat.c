char *ft_strcat(char *src, char *dest)
{
     int i = 0, j = 0;

     while(dest[i]){
        i++;
     }

     while(src[j]){
        dest[i] = src[j];
        i++;
        j++;
     }
     dest[i] = '\0';
     
     return dest;
}

