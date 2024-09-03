/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:45:35 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/29 16:53:19 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int nb, int fd)
{
    if (nb == -2147483648)
    {
        write(1, "-2", 2);
        ft_putnbr_fd(147483648, fd);
    }

    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putchar_fd(nb % 10, fd);
    }
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb *= -1;
    }
    return;
}