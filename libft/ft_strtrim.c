/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:35:54 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/25 12:45:35 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkcar(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_countfirst(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;
	size_t	check;

	i = 0;
	count = 0;
	while (s1[i])
	{
		check = ft_checkcar(s1[i], set);
		if (check == 0)
			return (count);
		count++;
		i++;
	}
	return (count);
}

static int	ft_countlast(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;
	size_t	check;

	count = 0;
	i = ft_strlen(s1);
	while (i > 0)
	{
		check = ft_checkcar(s1[i - 1], set);
		if (check == 0)
			return (count);
		count++;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lf;
	size_t	ll;
	size_t	i;
	size_t	len;
	char	*trim;

	i = 0;
	if (!s1[i])
		return (ft_strdup(""));
	lf = ft_countfirst(s1, set);
	ll = ft_countlast(s1, set);
	len = ft_strlen(s1) - (lf + ll);
	if (ll == ft_strlen(s1) || lf == ft_strlen(s1))
		len = 0;
	trim = (char *)malloc(sizeof(char) * (len + 1));
	if (trim == NULL)
		return (NULL);
	while (i < len)
	{
		trim[i] = s1[lf + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
