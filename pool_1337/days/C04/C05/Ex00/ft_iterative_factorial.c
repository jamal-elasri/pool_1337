int ft_iterative_factorial(int nb){
    
    int res = 1;

    if (nb < 0)
    {
    
        return 0;
    
    }

    while(nb > 0)
    {
        res *= nb;
    
        nb--;
    }

    return(res);
}

