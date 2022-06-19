#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *text)
{
	size_t	i;

	i = 0;
	while (text[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize > dstlen)
	{
		i = 0;
		while (i < dstsize - dstlen - 1 && src[i])
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = 0;
		return (srclen + dstlen);
	}
	else
	{
		return (srclen + dstsize);
	}
}

int	main()
{
	const char *source = "4567";
	char	dest_mine[8] = {"123"};
	char	dest_comp[8] = {"123"};
	size_t	dstsize = 1;

	printf("return size equality = %d (1 for equal)\n", strlcat(dest_mine, source, dstsize) == ft_strlcat(dest_comp, source, dstsize));
	printf("%s, %s, texts equality = %d (0 for equal)\n", dest_mine, dest_comp, strcmp(dest_mine, dest_comp));
}
