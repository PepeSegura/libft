/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:28:42 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/24 17:54:45 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;

	i = 0;
	s1_aux = (unsigned char *)s1;
	s2_aux = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_aux[i] == s2_aux[i])
			i++;
		else if (s1_aux[i] != s2_aux[i])
			return (s1_aux[i] - s2_aux[i]);
	}
	return (0);
}
