/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:44:42 by psegura-          #+#    #+#             */
/*   Updated: 2022/06/16 20:15:19 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int				ft_isalpha(unsigned char str);
int				ft_isdigit(unsigned char str);
int				ft_isalnum(unsigned char str);
int				ft_isascii(unsigned char str);
int				ft_isprint(unsigned char str);
int				ft_strlen(const char *str);
unsigned char	ft_toupper(unsigned char str);
unsigned char	ft_tolower(unsigned char str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
int				ft_atoi(const char *str);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
#endif
