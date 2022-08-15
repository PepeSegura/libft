/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:59:19 by psegura-          #+#    #+#             */
/*   Updated: 2022/08/15 02:23:25 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It returns the number of elements in a linked list
 * 
 * @param lst A pointer to the first element of a linked list.
 * 
 * @return The size of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (lst != NULL)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
			size++;
		}
		size++;
	}
	return (size);
}
