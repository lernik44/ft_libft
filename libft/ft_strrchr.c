/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:56:13 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/14 20:09:13 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *) s;
	i = 0;
	while (*(str + i))
		i++;
	if (c == 0)
		return (str + i);
	while (i >= 0)
	{
		if (*(str + i - 1) == (char) c)
			return (str + i - 1);
		i--;
	}
	return (NULL);
}
