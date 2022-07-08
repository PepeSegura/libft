/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:56:56 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/30 22:27:53 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	size_t	i;
	size_t	size;

	final = NULL;
	if (s1 != NULL && set != NULL)
	{
		i = 0;
		size = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[size -1] && ft_strrchr(set, s1[size -1]) && size > i)
			size--;
		final = malloc(sizeof(char) * (size - i + 1));
		if (final == NULL)
			return (NULL);
		ft_strlcpy(final, &s1[i], size - i + 1);
	}
	return (final);
}
/*
int	main(int argc, char **argv)
{
	char	*s1;
	char	*set;

	s1 = argv[1];
	set = argv[2];
	if (argc == 3)
		printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
*/
