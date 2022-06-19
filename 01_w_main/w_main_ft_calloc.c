#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

int	main()
{
	size_t	count = 100000000000;
	size_t	size = 1;
	
	printf("%p\n", ft_calloc(count, size));
	return (0);
}
