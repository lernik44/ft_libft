#include "libft.h"
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	char			c;

	i = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		i = -n;
	}
	if (n == 0)
		write(fd, "0", 1);
	else if (i < 10)
	{
		c = i % 10 + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
}

int	main(void)
{
	ft_putnbr_fd(INT_MIN, 1);
}
