/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmirzakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:57:46 by lmirzakh          #+#    #+#             */
/*   Updated: 2022/03/17 19:57:53 by lmirzakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numchar_len(int n)
{
	int				char_qty;
	unsigned int	abs_n;

	abs_n = n;
	if (n <= 0)
		abs_n = -n;
	char_qty = 0;
	while (abs_n > 0)
	{
		char_qty++;
		abs_n /= 10;
	}
	if (n <= 0)
		char_qty++;
	return (char_qty);
}

char	*ft_itoa(int n)
{
	char			*text_num;
	int				char_qty;
	int				i;
	unsigned int	abs_n;

	char_qty = numchar_len(n);
	text_num = (char *)malloc(sizeof(char) * (char_qty + 1));
	if (!text_num)
		return (NULL);
	abs_n = n;
	if (n < 0)
	{
		text_num[0] = '-';
		abs_n = -n;
	}
	i = char_qty;
	text_num[i--] = 0;
	while (i >= 0)
	{
		text_num[i--] = abs_n % 10 + '0';
		abs_n /= 10;
		if (n < 0 && i == 0)
			i--;
	}
	return (text_num);
}
