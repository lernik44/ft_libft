#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *) s;
	i = 0;
	while (*(str + i))
		i++;
	if (c == 0)
		return (str + i);
	while (i >= 0)
	{
		if (*(str + i - 1) == (char) c)
			return (str + i - 1);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	const char	*str = {"pabeda"};
	int			a = 'z';

	printf("%i\n", strrchr(str, a) == ft_strrchr(str, a));
}
