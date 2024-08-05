/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:09:13 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/04 16:09:15 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int tolower(char *str)
{
    int i;
    i = 0;

    while(str[i])
    {
        if (str[i] == 'A' && str[i] == 'Z')
            str[i] += 32;
        i++;
    }
    return (0);
}
