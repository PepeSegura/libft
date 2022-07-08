/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:07:00 by psegura-          #+#    #+#             */
/*   Updated: 2022/07/07 20:21:28 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux_s;
	unsigned char	aux_c;

	i = 0;
	aux_s = (unsigned char *)s;
	aux_c = (unsigned char)c;
	while (n > i)
	{
		if (aux_s[i] == aux_c)
			return ((void *)aux_s + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] = "bonjour";
	printf("%s", ft_memchr(str, 0, 1));
	printf("\n%s", memchr(str, 0, 1));
	return (0);
}*/
