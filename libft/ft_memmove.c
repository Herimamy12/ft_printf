/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:27:29 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/20 08:27:38 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*tdest;
	unsigned char	*tsrc;

	i = 0;
	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (src <= dest)
	{
		while (n-- > 0)
			tdest[n] = tsrc[n];
	}
	else
	{
		while (n-- > 0)
		{
			tdest[i] = tsrc[i];
			i++;
		}
	}
	return ((void *)tdest);
}
