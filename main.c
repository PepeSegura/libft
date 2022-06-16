/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:05:47 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/13 18:42:11 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(int argc, char **argv)
{
	char	letter;
	char	*text;

	if (argc == 2)
	{
		text = argv[1];
		letter = argv[1][0];
		printf("ft_isalpha -> %d\n", ft_isalpha(letter));
		printf("ft_isdigit -> %d\n", ft_isdigit(letter));
		printf("ft_isalnum -> %d\n", ft_isalnum(letter));
		printf("ft_isascii -> %d\n", ft_isascii(letter));
		printf("ft_isprint -> %d\n", ft_isprint(letter));
		printf("ft_strlen -> %d\n", ft_strlen(text));
		printf("ft_toupper -> %c\n", ft_toupper(letter));
		printf("ft_tolower -> %c\n", ft_tolower(letter));
	}
	else
		write(1, "Use more arguments", 18);
	return (0);
}
