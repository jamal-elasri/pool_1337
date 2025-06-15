void ft_put_char(char c){
	write(1, &c, 1);
}

void ft_putnbr(int nb){
	if (nb == -2147483648){
		ft_put_char('-');
		ft_put_char('2');
		ft_putnbr(147483648);
		
	}
	else if(nb < 0){
		ft_put_char('-');
		nb = -nb;
		ft_putnbr(nb + 0);
	}
	else if(nb > 9){
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else{
	        ft_put_char(nb + 48);
	}
}


