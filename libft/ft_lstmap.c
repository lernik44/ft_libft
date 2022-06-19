/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:11:36 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/25 12:45:28 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_page;

	if (!lst)
		return (NULL);
	new_page = ft_lstnew(f(lst->content));
	if (!new_page)
		return (NULL);
	new_list = new_page;
	while (lst->next)
	{
		lst = lst->next;
		new_page = ft_lstnew(f(lst->content));
		if (!new_page)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_page);
	}
	return (new_list);
}
