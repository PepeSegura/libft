/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:19:07 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/28 13:43:11 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*final;
	size_t	i;

	final = malloc((sizeof(char) * len) + 1);
	if (!s)
		return (NULL);
	if (final == NULL)
		return (NULL);
	i = 0;
	if (start >= len)
	{
		final[0] = '\0';
		return (final);
	}
	while (len > 0)
	{
		final[i] = s[start];
		i++;
		start++;
		len--;
	}
	final[i] = '\0';
	return (final);
}
/*
int	main(void)
{
	char *s1 = "lorem ipsum dolor sit amet";

	printf("%s", ft_substr(s1, 4, 200));
}
*/
