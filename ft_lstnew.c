/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:08:29 by abreuil           #+#    #+#             */
/*   Updated: 2024/09/23 13:01:55 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//typedef struct	s_list
//{
//	void	*content; //Pointer to the content of the node
//	size_t	content_size; //Size of the content
//	struct s_list	*next;//Pointer to the next node in the list
//}	t_list;
/*
ft_lstlast retourne un pointeur vers le dernier node de la liste.
Simplement, tant que lst->next n'est pas NULL, on avance dans la liste

C'est important de verifier si lst est NULL car si on lit dans lst alors
qu'il est nul c'est le SIGSEGV assuree. (Je vais le rajouter aux autres
fonctions lst d'ailleurs)
*/
t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	if (content)
	{
		new_node->content = malloc(content_size);
		if (!(new_node->content))
		{
			free(new_node);
			return (NULL);
		}
		ft_memcpy(new_node->content, content, content_size);
		new_node->content = content_size;
	}
	else
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	new_node->next = NULL;
	return (new_node);
}
