/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:17:51 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/29 17:28:40 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    
    i = 0;
    unsigned char *d; 
    const unsigned char *s;
    
    d = (unsigned char *) dest;
    s = (const unsigned char *) src;

    if (d == s || n == 0)
        return (dest);
    if (d < s)
        {
            while(i++ < n)
                d[i] = s[i];
        }
    else 
    {
        while (i > n)
        {
            d[i] = s[i];
            i--;
        }
    }
    return (d);   
}