/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:56:56 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/29 19:57:58 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_checkl(char *s1, char setl)
{
	int	cont;
	int	i;
	int	l_s1;

	cont = 0;
	i = 0;
	l_s1 = ft_strlen(s1);
	while (s1[i] == setl)
	{
		cont++;
		i++;
	}
	while (s1[l_s1 - 1] == setl)
	{
		cont++;
		l_s1--;
	}

	return (cont);
}
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	size_t	l_s1;

	l_s1 = ft_strleen(s1);
	final = malloc(sizeof(char) * "????");
}
*/
int	main(void)
{
	char *s1 = "aabbbaaaa";
	char *set = "aba";
	int i = 0;

	while (set[i] != '\0')
	{
		printf("%d\n", ft_checkl(s1, set[i]));
		i++;
	}
	return (0);
}
