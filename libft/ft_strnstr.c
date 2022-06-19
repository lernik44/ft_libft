/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:39:45 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/14 20:09:38 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;

	length = 0;
	while (needle[length])
		length++;
	if (length == 0)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i + j <= len)
	{
		j = 0;
		while (j < length && needle[j] == haystack[i + j])
			j++;
		if (j == length && i + j <= len)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
