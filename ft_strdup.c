/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:12:36 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/29 12:37:19 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strdup(const char *s)
{
	size_t i;
    char *dup;
	if (!s)
		return (NULL);
    
    dup = malloc(ft_strlen(s) + 1);
    if (!dup)
        return (NULL);
    while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
    return (dup);
}