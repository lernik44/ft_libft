/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:44:43 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/16 14:44:44 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	new_string = (char *)malloc(sizeof(char) * (i + 1));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s1, i + 1);
	ft_strlcat(new_string, s2, i + 1);
	return (new_string);
}
