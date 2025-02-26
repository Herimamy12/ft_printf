/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilsthree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:27:21 by nherimam          #+#    #+#             */
/*   Updated: 2024/03/10 12:27:25 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_putunsigned(int nb)
{
	if (nb < 0)
		ft_putnbrunsi (nb + 4294967296);
	else
		ft_putnbrunsi (nb);
	return (ft_countlenunsi (nb));
}

char	*ft_strchr(char *str, char c)
{
	int		i;
	char	*tmp;

	i = 0;
	while (str[i])
	{
		tmp = (char *)&str[i];
		if (str[i] == c)
			return (tmp);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}

size_t	ft_countlenunsi(long nb)
{
	size_t	count;

	count = 0;
	if (nb < 0)
		return (10);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

size_t	ft_hexadress_len(unsigned long nb)
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
