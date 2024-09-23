/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:59:22 by abreuil           #+#    #+#             */
/*   Updated: 2024/09/23 14:08:59 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_list = NULL;
    t_list	*new_node;

    while (lst != NULL)
    {
        // Apply the function f to lst->content and create a new node
        new_node = ft_lstnew(f(lst->content));
        if (new_node == NULL)
        {
            // If allocation fails, clear the already created nodes
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        // Add the new node to the new list
        ft_lstadd_back(&new_list, new_node);
        
        // Move to the next node in the original list
        lst = lst->next;
    }
    return (new_list);
}
