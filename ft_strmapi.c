/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:36:40 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/27 18:02:41 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*final;
	size_t	i;

	if (!s)
		return (NULL);
	final = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (final == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		final[i] = (*f)(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
