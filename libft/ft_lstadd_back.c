/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:10:34 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/25 10:45:15 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp_p;

	if (!(*lst))
		*lst = new;
	else
	{
		temp_p = ft_lstlast(*lst);
		if (!temp_p)
			return ;
		temp_p->next = new;
	}
}
