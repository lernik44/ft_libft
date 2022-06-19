/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:52:24 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/04/10 15:51:26 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	mem_value;

	mem_value = size * count;
	if (size != 0 && SIZE_MAX / size < count)
		return (NULL);
	p = malloc(mem_value);
	if (!p)
		return (NULL);
	ft_bzero(p, mem_value);
	return (p);
}
