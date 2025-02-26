/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilstwo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:28 by nherimam          #+#    #+#             */
/*   Updated: 2024/03/09 23:16:38 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_hex_len(unsigned int nb)
{
	size_t	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb /= 16;
	}
	return (len);
}

size_t	ft_puthexa(unsigned int nb, char c)
{
	if (nb == 0)
		return (ft_putchar ('0'));
	if (nb > 15)
	{
		ft_puthexa ((nb / 16), c);
		ft_puthexa ((nb % 16), c);
	}
	else
	{
		if (nb < 10)
			ft_putchar (nb + '0');
		else
		{
			if (c == 'x')
				ft_putchar (nb - 10 + 'a');
			if (c == 'X')
				ft_putchar (nb - 10 + 'A');
		}
	}
	return (ft_hex_len(nb));
}

size_t	ft_puthexadress(unsigned long nb, char c)
{
	if (nb == 0)
		return (ft_putchar ('0'));
	if (nb > 15)
	{
		ft_puthexadress ((nb / 16), c);
		ft_puthexadress ((nb % 16), c);
	}
	else
	{
		if (nb < 10)
			ft_putchar (nb + '0');
		else
		{
			if (c == 'x')
				ft_putchar (nb - 10 + 'a');
			if (c == 'X')
				ft_putchar (nb - 10 + 'A');
		}
	}
	return (ft_hexadress_len(nb));
}

size_t	ft_putadress(unsigned long ptr)
{
	if (!ptr)
		return (ft_putstr ("(nil)"));
	return (ft_putstr ("0x") + ft_puthexadress ((ptr), 'x'));
}

size_t	ft_countlen(long nb)
{
	size_t	count;

	count = 0;
	if (nb <= 0)
	{
		count++;
		if (nb < 0)
			nb *= -1;
	}
	while (nb > 0)
	{
		count++;
		nb /= 10;
	}
	return (count);
}
