void ft_rev_int_tab(int *tab, int size){
	int first = 0;
	int last = size - 1;
	int temp;

	while(first < last){
		temp = tab[first];
		tab[first] = tab[last];
		tab[last] = temp;

		first++;
		last--;
	}
}


