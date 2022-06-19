/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:05:29 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/25 11:31:54 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int	main(void)
{
	char	*text = "tripouille   xxxxxx";
	char	*set = " x";

	printf("%s\n", ft_strtrim(text, set));
}
