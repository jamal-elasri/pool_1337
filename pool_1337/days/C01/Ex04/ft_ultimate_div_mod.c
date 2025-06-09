void  ft_ultimate_div_mod(int *a, int *b){
	int quot = *a / *b;
	int remain = *a % *b;

	
	*a = quot;
	*b = remain; 
}
