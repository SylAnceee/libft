/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:08:59 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/04 16:09:01 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d",ft_strlen(av[1]));
	}
	return 0;
}
*/