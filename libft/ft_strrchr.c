/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:13:41 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/21 07:17:11 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = NULL;
	len = ft_strlen(s);
	while ((len) >= 0)
	{
		ptr = (char *)&s[len];
		if (s[len] == (char)c)
			return (ptr);
		len--;
	}
	return (0);
}
