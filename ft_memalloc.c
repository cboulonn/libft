#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;

	p = NULL;
	if (size != 0)
	{
		if((p = (void *)malloc(size)) != NULL)
			ft_bzero(p, size);
	}
	return (p);
}
