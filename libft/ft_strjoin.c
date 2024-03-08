/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:10:20 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/22 21:10:36 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;
	size_t	ls1;
	size_t	ls2;

	i = 0;
	str = NULL;
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (str == NULL)
		return (NULL);
	while (i < ls1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ls2)
	{
		str[i + ls1] = s2[i];
		i++;
	}
	str[i + ls1] = '\0';
	return (str);
}
