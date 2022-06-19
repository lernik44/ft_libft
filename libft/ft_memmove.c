/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:59:19 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/15 16:34:16 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_text;
	char	*dst_text;
	size_t	i;

	src_text = (char *)src;
	dst_text = (char *)dst;
	if (src_text >= dst_text)
	{
		i = 0;
		while (i < len)
		{
			dst_text[i] = src_text[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i-- > 0)
			dst_text[i] = src_text[i];
	}
	return (dst);
}
