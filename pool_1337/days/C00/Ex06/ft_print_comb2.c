#include <unistd.h>

void ft_put_char(char c){
     write(1, &c, 1);
}


void ft_print_num(int n){
     ft_put_char('0' + n / 10);
     ft_put_char('0' + n % 10);
}


void ft_print_comb2(void){
     for(int i = 0; i <= 98; i++){
         for(int j = i + 1; j <= 99; j++){
	    ft_print_num(i);
	    ft_put_char(' ');
	    ft_print_num(j);

	    if( i != 98 || j != 99){
	       write(1, ", ", 2);
	    }
	  }
   }
}


