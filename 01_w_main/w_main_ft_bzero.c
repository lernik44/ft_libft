#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *) s;
	i = 0;
	while (i < n)
	{
		*p = 0;
		p++;
		i++;
	}
}

int	main(void)
{
	char	text1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	char	text2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	bzero (text1[5], 3);
	ft_bzero (text2[5], 3);
//	printf("%s\n", text1);
//	printf("%s\n", text2);
	printf("%c\n", text1[5]);
	printf("%c\n", text2[5]);
	printf("%c\n", text1[6]);
	printf("%c\n", text2[6]);
	printf("%c\n", text1[7]);
	printf("%c\n", text2[7]);
	printf("%c\n", text1[8]);
	printf("%c\n", text2[8]);

}
