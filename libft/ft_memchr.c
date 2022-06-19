/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:11:41 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/25 13:15:49 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*array;

	array = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (array[i] == (unsigned char) c)
			return (&array[i]);
		i++;
	}
	return (NULL);
}
