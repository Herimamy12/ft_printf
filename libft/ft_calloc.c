/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:17:03 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/21 08:17:06 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;
	char	*tmp;

	i = 0;
	ptr = NULL;
	tmp = (char *)malloc(size * nmemb);
	if (tmp == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		tmp[i] = 0;
		i++;
	}
	ptr = (void *)tmp;
	return (ptr);
}
