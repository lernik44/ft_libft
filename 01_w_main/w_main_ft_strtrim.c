//#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*text;
	size_t	min_len;

	min_len = len;
	if (strlen(s + start) < len)
		min_len = strlen(s + start);
	if (strlen(s) < start)
		min_len = 0;
	text = (char *)malloc(sizeof(char) * (min_len + 1));
	if (!text)
		return (NULL);
	strlcpy(text, s + start, min_len + 1);
	return (text);
}

static char	*set_beg(char *s, char const *set)
{
	size_t	i;
	size_t	set_len;

	set_len = strlen(set);
	i = 0;
	while (i < set_len)
	{
		while (*s == set[i])
		{
			s++;
			i = 0;
		}
		i++;
	}
	return (s);
}

static void	set_end(char *s2, char const *set)
{
	size_t	i;
	size_t	set_len;
	size_t	s2_len;

	set_len = strlen(set);
	s2_len = strlen(s2);
	i = 0;
	while (i < set_len)
	{
		while (s2[s2_len - 1] == set[i] && s2_len > 0)
		{
			s2[s2_len - 1] = 0;
			s2_len--;
			i = 0;
		}
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	s2 = strdup(s1);
	s2 = set_beg(s2, set);
	set_end(s2, set);
	s2 = ft_substr(s2, 0, strlen(s2));
	return (s2);
}

int	main(void)
{
	const char	*s = "tripouille  ababaccab";
	const char	*set = "abc";

	printf("%s\n", ft_strtrim(s, set));
}
