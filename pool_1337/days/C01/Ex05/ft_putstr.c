#include <unistd.h>

void ft_putstr(char *str){
     for(i = 0; str[i] != '\0'; i++){
	     write(1, &str[i], 1);
     }

}
