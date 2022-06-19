#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		   return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*text1 = {"korov"};
	char	*text2 = {"korova"};
	size_t	n = 6;

	printf("equality is %d\n (1 means equal, 0 means error)", ft_strncmp(text1, text2, n) == strncmp(text1, text2, n));
}
