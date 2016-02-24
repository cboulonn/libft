#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = ft_strlen(s);
	if (s)
		ft_bzero(s, i);
}
