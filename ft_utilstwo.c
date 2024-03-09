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

#include "ft_printf.h"

size_t	ft_puthexa(unsigned long nb)
{
	char	*ch;
	size_t	count;

	count = count_hexa(nb);
	ch = (char *)malloc(sizeof(char) * 17);
	if (!ch)
		return (0);
	ch = "0123456789abcdef";
	if (nb > 15)
	{
		ft_puthexa (nb / 16);
		ft_puthexa (nb % 16);
	}
	else
		ft_putchar (ch[nb]);
	return (count);
}

size_t	ft_putheXa(unsigned long nb)
{
	char	*ch;
	size_t	count;

	count = count_hexa (nb);
	ch = (char *)malloc(sizeof(char) * 17);
	if (!ch)
		return (0);
	ch = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_putheXa (nb / 16);
		ft_putheXa (nb % 16);
	}
	else
		ft_putchar (ch[nb]);
	return (count);
}

size_t	ft_putadress(unsigned long ptr)
{
	size_t	count;

	count = (2 + count_hexa (ptr));
	ft_putstr ("0x");
	ft_puthexa (ptr);
	return (count);
}

size_t	count_hexa(long nb)
{
	size_t count;

	count = 0;
	if (nb < 0)
		return (8);
	if (nb == 0)
		return (1);
	while (nb > 16)
	{
		count++;
		nb /= 16;
	}
	count++;
	return (count);
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
