#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*text1;
	unsigned char	*text2;
	size_t			i;

	text1 = (unsigned char *)s1;
	text2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (text1[i] != text2[i])
			return (text1[i] - text2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	arr1[] = {-128};
	char	arr2[] = {0};
	size_t	i = 10;

	printf("original %d\n", memcmp(arr1, arr2, i));
	printf("replica  %d\n", ft_memcmp(arr1, arr2, i));
}
