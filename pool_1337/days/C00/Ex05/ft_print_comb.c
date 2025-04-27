#include <unistd.h>

void ft_print_comb (void){
    for (int i = 0; i <= 7 ; i++){
        for (int j = i + 1; j <= 8 ; j++){
            for (int k = j + 1 ; k <= 9 ; k++){
                char a = '0' + i;
                char b = '0' + j;
                char c = '0' + k;


                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);


                if (a != 7 || b != 8 || c != 9 ){
                    write(1, ", ", 2);
                }
            }
        }
    }
}


