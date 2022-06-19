/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:10:59 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/25 10:48:08 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_prev;
	t_list	*temp_curr;

	temp_curr = *lst;
	while (temp_curr->next)
	{
		del(temp_curr->content);
		temp_prev = temp_curr;
		temp_curr = temp_curr->next;
		free(temp_prev);
	}
	del(temp_curr->content);
	free(temp_curr);
	*lst = NULL;
}
