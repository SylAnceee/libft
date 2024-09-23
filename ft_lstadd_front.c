/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:44:39 by abreuil           #+#    #+#             */
/*   Updated: 2024/09/23 13:55:41 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
		return;
	if (!new)
		return;
	if (new)
	{
		new->next = *lst;
		*lst = new;	
	}
}