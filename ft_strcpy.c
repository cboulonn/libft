#include "libft.h"
#include <stdio.h>
#include <assert.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int compt;

	compt = 0;
	while (src[compt] != '\0')
	{
		dst[compt] = src[compt];
		compt++;
	}
	dst[compt] = src[compt];
	return (dst);
}

int		main(void)
{
	char s[100];

	bzero(s, 100);
	ft_strcpy(s, "abc");
	assert(strcmp(s, "abc") == 0);
	printf("OK ft_strcpy\n");
	return (0);
}
