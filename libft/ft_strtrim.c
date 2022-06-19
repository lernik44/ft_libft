/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:05:29 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/25 11:49:00 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	beg;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_substr(s1, 0, ft_strlen(s1)));
	beg = 0;
	while (ft_strchr(set, *(s1 + beg)))
		beg++;
	end = 0;
	while (ft_strchr(set, *(s1 + ft_strlen(s1) - 1 - end)))
		end++;
	s2 = ft_substr(s1, beg, ft_strlen(s1) - beg - end);
	return (s2);
}
