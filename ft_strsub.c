#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *tron;

	tron = NULL;
	if (s)
	{
		tron = ft_strnew(len);
		if (tron != NULL)
		{
			tron = ft_strncpy(str, s, len);
		}
	}
	return (tron);
}
