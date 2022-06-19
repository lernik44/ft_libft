#include <stdio.h>
#include <string.h>

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

int	main(void)
{
	char	src_text[] = {"1234567890"};
	char	dst_text[15];
	size_t	qty = 7;

	printf("%s\n", memcpy(dst_text, src_text, qty));
}
