#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	srcsize = 0;
	while (src[srcsize])
	{
		srcsize++;
	}
	if (dstsize > 0)
	{
		i = 0;
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (srcsize);
}

int	main()
{
	const char *text1 = "1234567";
	char	text2[9];
	char	text3[9];
	size_t	dstsize = 0;

	printf("%lu\n", strlcpy(text2, text1, dstsize));
	printf("%s\n", text2);
	printf("%zu\n", ft_strlcpy(text3, text1, dstsize));
	printf("%s\n", text3);
	printf("return size equality = %d (1 for equal)\n", strlcpy(text2, text1, dstsize) == ft_strlcpy(text3, text1, dstsize));
	printf("text_o = %s, text_r = %s, texts equality = %d (0 for equal)\n", text2, text3, strcmp(text2, text3));
}
