#include <unistd.h>

char ft_putchar(char c){
	write(1 , &c, 1);
}

int main(int argc, char *argv[]){
	int i = 1;
	int j;

	while (argv[i]){
		j = 0;
		   while (argv[i][j]){
			   ft_putchar(argv[i][j]);
			   j++;
		   }
		ft_putchar('\n');
		i++;
	}
}
