int ft_iterative_power(int nb, int power)
{
    if ( power < 0){
        return 0;
    }

    if (nb == 0 && power == 0){
        return 1;
    }

    int res = 1;
    int i = 0;

    while (i < power){
        res *= nb;
        i++; 
    }

    return (res);
}