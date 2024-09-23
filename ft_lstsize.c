/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:42:05 by abreuil           #+#    #+#             */
/*   Updated: 2024/09/23 13:56:17 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	void current;
	size_t flag;
	if (!lst)
		return (0);
	flag = 0;
	while (current != NULL)
	{
		flag++;
		current = current->next
	}
	return (flag);
}