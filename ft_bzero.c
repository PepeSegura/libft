/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:12:17 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/27 12:59:32 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = s;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}
/*
int	main()
{
	char dest[] = "holaa";

	printf("%s", ft_bzero(dest, 2));
}
*/
