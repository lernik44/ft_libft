#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*array;

	i = 0;
	array = (char *) b;
	while (i < len)
	{
		array[i] = (unsigned char) c;
		i++;
	}
	return (array);
}

int	main(void)
{
	char	text_o[] = {"1234567890"};
	char	text_r[] = {"1234567890"};
	size_t	qty = 8;
	char	c = 'a';

	printf("text_o = %p\n", memset(text_o, c, qty));
	printf("text_r = %p\n", ft_memset(text_r, c, qty));
//	printf("%d\n", text_o == text_r);
}
