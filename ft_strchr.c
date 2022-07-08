/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 23:11:37 by psegura-          #+#    #+#             */
/*   Updated: 2022/07/07 19:09:33 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	l;

	l = (unsigned char)c;
	while (*s != l)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
