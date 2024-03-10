/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:47:22 by nherimam          #+#    #+#             */
/*   Updated: 2024/03/08 11:47:25 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
size_t	ft_checkformat(char c, va_list params);
size_t	ft_strlen(char *str);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int nb);
void	ft_putnbrunsi(long nb);
size_t	ft_putunsigned(int nb);
char	*ft_strchr(char *str, char c);
size_t	ft_puthexa(long nb, char *ch);
size_t	ft_puthexa_two(long nb, char *ch);
size_t	ft_putadress(long ptr);
size_t	count_hexa(long nb);
size_t	ft_countlen(long nb);
size_t	ft_countlenunsi(long nb);

#endif
