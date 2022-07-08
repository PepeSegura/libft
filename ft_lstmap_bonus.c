/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:02:25 by psegura-          #+#    #+#             */
/*   Updated: 2022/07/07 10:49:17 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*final;
	t_list	*puntero;

	if (!lst || !f)
		return (NULL);
	puntero = NULL;
	while (lst != NULL)
	{
		final = ft_lstnew(f(lst->content));
		if (final == NULL)
		{
			ft_lstclear(&puntero, del);
			return (NULL);
		}
		ft_lstadd_back(&puntero, final);
		lst = lst->next;
	}
	return (puntero);
}
