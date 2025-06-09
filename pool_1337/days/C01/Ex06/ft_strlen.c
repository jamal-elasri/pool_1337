int ft_sterlen(char *str){
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++){
	       count++;
	}
	return count;
}	
