#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char  *copie;
	int i;

	i = 0;
	copie  = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	while(s1[i] != '\0')
	{
		copie[i] = s1[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);	
}	
