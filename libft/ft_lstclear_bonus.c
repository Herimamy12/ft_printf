/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:10:50 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/28 08:10:53 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lsttmp;
	t_list	*tmp;

	tmp = NULL;
	lsttmp = *lst;
	while (lsttmp)
	{
		tmp = lsttmp->next;
		del(lsttmp->content);
		free (lsttmp);
		lsttmp = tmp;
	}
	*lst = NULL;
}
