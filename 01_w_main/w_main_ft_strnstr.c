#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;

	length = 0;
	while (needle[length])
		length++;
	if (length == 0)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i + j <= len)
	{
		j = 0;
		while (j < length && needle[j] == haystack[i + j])
			j++;
		if (j == length && i + j <= len)
			return ((char *) (haystack + i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*text1 = "156456789";
	const char	*text2 = "647";
	size_t		n = 7;

	printf("%d\n", ft_strnstr(text1, text2, n) == strnstr(text1, text2, n)); 
	printf("%s\n", strnstr(text1, text2, n)); 
	printf("%s\n", ft_strnstr(text1, text2, n)); 
}
