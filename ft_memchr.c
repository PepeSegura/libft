/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:07:00 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/28 13:13:25 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux_s;
	unsigned char	aux_c;

	aux_s = (unsigned char *)s;
	aux_c = (unsigned char)c;
	if (!*aux_s)
		return (NULL);
	while (n > 0)
	{
		if (*aux_s == aux_c)
			return (aux_s);
		aux_s++;
		n--;
	}
	return (NULL);
}
