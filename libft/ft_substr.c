/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:37:35 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/21 09:37:37 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lens;
	char	*dest;

	i = 0;
	lens = ft_strlen(s);
	dest = NULL;
	if (start >= lens)
		return (ft_strdup(""));
	else if (lens < len)
		dest = (char *)malloc((sizeof(char) * (lens + 1 - start)));
	else
		dest = (char *)malloc((sizeof(char) * (len + 1)));
	if (dest == NULL)
		return (dest);
	while (i < len && (s[start + i] != '\0'))
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
