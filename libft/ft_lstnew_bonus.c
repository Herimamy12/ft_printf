/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:36:44 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/27 09:36:46 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*init;

	init = (t_list *)malloc(sizeof(t_list));
	if (init == NULL)
		return (NULL);
	init->content = content;
	init->next = NULL;
	return (init);
}
