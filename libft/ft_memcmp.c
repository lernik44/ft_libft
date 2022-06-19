/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:52:58 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/14 20:06:05 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*text1;
	unsigned char	*text2;
	size_t			i;

	text1 = (unsigned char *)s1;
	text2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (text1[i] != text2[i])
			return (text1[i] - text2[i]);
		i++;
	}
	return (0);
}
