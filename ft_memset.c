/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 19:13:57 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/04 16:06:21 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p = s;
    while(n)
    {
        *p++ = (unsigned char) c;
        n--;
    }
    return (s);
}

/*int main()
{
    char str[] = "Hello, world!";
    ft_memset(str, '-', 4);
    printf("%s\n", str);
}*/