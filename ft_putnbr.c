/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:53:47 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/29 16:52:38 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }

    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10);
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    return;
}
