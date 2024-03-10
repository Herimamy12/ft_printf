/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:34:02 by nherimam          #+#    #+#             */
/*   Updated: 2024/03/09 22:34:19 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_checkformat(char c, va_list params)
{
	if (c == 'c')
		return (ft_putchar(va_arg(params, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(params, char *)));
	else if (c == 'p')
		return (ft_putadress(va_arg(params, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(params, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(params, int)));
	else if (c == 'x')
		return (ft_puthexa(va_arg(params, long)));
	else if (c == 'X')
		return (ft_puthexa_two(va_arg(params, long)));
	return (ft_putchar ('%'));
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		valeur;
	va_list	params;

	i = 0;
	valeur = 0;
	va_start (params, str);
	while (*(str + i))
	{
		if (*(str + i) == '%' && (ft_strchr("cspdiuxX%", *(str + 1 + i))))
		{
			valeur += ft_checkformat (*(str + 1 + i), params);
			i++;
		}
		else
			valeur += ft_putchar (*(str + i));
		i++;
	}
	va_end (params);
	return (valeur);
}
