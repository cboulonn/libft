#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;

	p = NULL;
	if (size != 0)
	{
		if ((p = (char *)malloc(sizeof(char) * (size + 1)) != NULL)
			ft_bzero(p, size);
	}
	return (p);
}
