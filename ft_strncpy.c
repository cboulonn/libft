#include "libft.h"
#include <stdio.h>
#include <assert.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	index;

	index = 0;
	while (index <  len && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}

int		main(void)
{
	char s[100];

	bzero(s, 100);
	ft_strncpy(s, "ab", 2);
	assert(strncmp(s, "ab", 2) == 0);
	printf("OK ft_strncpy\n");
	return (0);
}
