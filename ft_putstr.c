/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:08:28 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/04 16:08:36 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
        {
            write (1, &str[i], 1);
            i++;
        }
}

/*int main (int ac, char **av)
{
    if (ac == 2)
    {
    /*    ft_putstr(av[1]);
    }
    return 0;
}*/