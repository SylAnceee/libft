#include "libft.h"

int ft_putnbr_fd(int nb, int fd)
{
    if (nb = -2147483648)
    {
        write(1, -2, 2);
        ft_putnbr_fd(147483648, fd);
    }

    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putchar(nb % 10);
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    return (nb);
}