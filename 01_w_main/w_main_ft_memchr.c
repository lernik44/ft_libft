#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*array;

	array = (char *)s;
	i = 0;
	while (i < n)
	{
		if (array[i] == (unsigned char) c)
			return (&array[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	arr[15] = "0123456789";
	int		i = '3';

	printf("%s\n", memchr(arr, i, 10));
	printf("%s\n", ft_memchr(arr, i, 10));
}
