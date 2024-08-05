/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:32:53 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/05 15:53:02 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest = s1;
    unsigned char *src = s2;
    i = 0;

    while(s2[i] < n)
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';

    return;
}