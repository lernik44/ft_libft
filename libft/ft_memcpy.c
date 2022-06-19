/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:00:21 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/14 20:04:43 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_text;
	char	*src_text;

	i = 0;
	dst_text = (char *) dst;
	src_text = (char *) src;
	while (i < n)
	{
		dst_text[i] = src_text[i];
		i++;
	}
	return (dst);
}
