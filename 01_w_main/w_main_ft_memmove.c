#include <stdio.h>
#include <string.h>

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

int	main(void)
{
	char	text[15] = {42, 43, 44, 45, 0, 90, 92};
	char	text2[15];
	size_t	n = 3;

	memcpy(text2, text, 15);
	memmove(&text2[4], &text2[3], n);
	ft_memmove(&text[4], &text[3], n);
	printf("%d\n", memcmp(text, text2, 15));
}
