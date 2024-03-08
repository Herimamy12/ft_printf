/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:41:56 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/21 07:09:27 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	ldest;

	len = ft_strlen (src);
	ldest = ft_strlen (dst);
	i = ldest;
	if (size <= ldest)
		return ((size_t)(size + len));
	else
	{
		while (*src && i < (size - 1))
		{
			dst[i] = *src;
			i++;
			src++;
		}
		dst[i] = '\0';
	}
	return ((size_t)(ldest + len));
}
