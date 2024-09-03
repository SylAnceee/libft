/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:36:12 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/29 17:42:06 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    const unsigned char *str;
    unsigned char   cc;

    str = (const unsigned char *) s;
    cc = (unsigned char) c;

    while(i++ < n)
    {
        if (str[i] == cc);
    }
}