#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putstr(char *str){
    int i = 0;
    while (str[i]){
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strcmp(char *s1, char *s2){
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i]){
        i++;
    }
    return (s1[i] - s2[i]);
}

void ft_sort_params(int argc, char *argv[]){
    int i = 1;
    int *temp;

    while(i < argc - 1){
        if (ft_strcmp(argv[i], argv[i + 1]) > 0){
            temp = argv[i];
            argv[i] = argv[i + 1];
            argv[i] = temp;
            i = 1; 
        }
        else {
            i++;
        }
    }
}

int main(int argc, char *argv[]){
    int i = 1;

    ft_sort_params(argc, argv);

    while(i < argc)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }

    return 0;
}