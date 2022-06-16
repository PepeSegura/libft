/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:20:25 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/16 12:35:13 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	number;

	number = (long long)n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = number * -1;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		number = number % 10;
	}
	if (number <= 9)
		ft_putchar_fd(number + '0', fd);
}
/*
int	main(void)
{
	int fd;

	fd = 1;
	ft_putnbr_fd(-2147483648LL, fd);
}
*/
