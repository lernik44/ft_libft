#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *) s;
	while (*str)
	{
		if (*str == (char) c)
			return (str);
		str++;
	}
	if (c == 0)
		return (str++);
	else
		return (NULL);
}

int	main(void)
{
	const char	*str = {"pabeda"};
	int			a = 97;

	printf("%i\n", strchr(str, a) == ft_strchr(str, a));
}
