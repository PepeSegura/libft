/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:38:57 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/24 13:38:50 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;
	char			*lastd;
	const char		*lasts;

	d = dst;
	s = src;
	lasts = s + (len - 1);
	lastd = d + (len - 1);
	if (dst == '\0' && src == '\0')
		return (NULL);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}
