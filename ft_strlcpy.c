/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:17:55 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/15 10:25:22 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	i;
	char			*tmp;

	tmp = src;
	size_dest = 0;
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	src = tmp;
	if (size != 0)
	{
		while (*(src + i) != '\0' && i < (size -1))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	textd[] = "hola me llamo pepe";
	char	texts[] = "nicolas";
	int		size = 5;

	printf("%d", ft_strlcpy(textd, texts, size));
	return (0);
}
*/
