/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (NULL == str)
		return (NULL);
	ft_strlcpy(str, s1, (ft_strlen(s1) + 1));
	return (str);
}
/*
int	main(void)
{
	char	*string = "12345";

	printf("orig strdup = %s\n", strdup(string));
	printf("ft_strdup = %s\n", ft_strdup(string));
}*/
