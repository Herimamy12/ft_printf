/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:48:49 by nherimam          #+#    #+#             */
/*   Updated: 2024/03/08 11:48:52 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

size_t	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr ("(null)"));
	write (1, str, ft_strlen(str));
	return (ft_strlen(str));
}

size_t	ft_putnbr(int nb)
{
	size_t	count;

	count = ft_countlen (nb);
	if (nb == -2147483648)
	{
		ft_putstr ("-2147483648");
		return (count);
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
		ft_putchar (nb + '0');
	return (count);
}

void	ft_putnbrunsi(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putnbrunsi (nb / 10);
		ft_putnbrunsi (nb % 10);
	}
	else
		ft_putchar (nb + '0');
}
