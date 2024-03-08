/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:46:05 by herimamy          #+#    #+#             */
/*   Updated: 2024/02/25 15:46:10 by herimamy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_checkword(char const *s, char c)
{
	size_t	cw;

	cw = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			cw++;
		while (*s != c && *s)
			s++;
	}
	return (cw);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;
	size_t	len;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (ft_checkword(s, c) + 1));
	if (!s || !str)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			str[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	str[i] = NULL;
	return (str);
}
