#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	i = 0;
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - 48);
		str++;
	}
	return (i * sign);
}

int	main(void)
{
	const char	*text = "  \t +12345a";

	printf("%d\n", atoi(text));
	printf("%d\n", ft_atoi(text));
	printf("%d\n", atoi(text) == ft_atoi(text));
}
