/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:15:45 by psegura-          #+#    #+#             */
/*   Updated: 2022/07/06 13:11:36 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	size_t	l_s1;
	size_t	l_total;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	l_s1 = ft_strlen(s1);
	l_total = l_s1 + ft_strlen(s2);
	final = ft_calloc(sizeof(char), l_total + 1);
	if (final == NULL)
		return (NULL);
	i = 0;
	while (i < l_s1)
	{
		final[i] = s1[i];
		i++;
	}
	while (i < l_total)
	{
		final[i] = s2[i - l_s1];
		i++;
	}
	return (final);
}
/*
int	main(void)
{
	char s1[] = "01234";
	char s2[] = "56789";

	char s3[] = "01234";
	char s4[] = "\0";

	char s5[] = "\0";
	char s6[] = "5678";

	char s7[] = "\0";
	char s8[] = "\0";

	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", ft_strjoin(s3, s4));
	printf("%s\n", ft_strjoin(s5, s6));
	printf("%s\n", ft_strjoin(s7, s8));
	return (0);
}*/
