#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c , 1);
}

int ft_putnbr(int nb)
{
    if (nb == -2147483648){
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483647;
    }

    else if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putchar(nb + 48);
    }

    else if (nb < 9)
    {
        ft_putchar(nb / 10);
        ft_putchar(nb % 10);
    }

    else
    {
        ft_putchar(nb + 48);
    }

}