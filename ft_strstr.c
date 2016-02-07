
#include "libft.h"
#include <stdio.h>
#include <assert.h>

char	*ft_strstr(const char *big, const char *little)
{
	const char *instr;
	const char *intof;
	const char *begin;

	if (!*little)
		return ((char *)big);
	instr = big;
	intof = little;
	while (*instr)
	{
		begin = instr;
		while (*instr == *intof && *instr && *intof)
		{
			if (intof[1] == '\0')
				return ((char *)begin);
			instr++;
			intof++;
		}
		instr = begin;
		intof = little;
		instr++;
	}
	return (NULL);
}

int		main(void)
{
	assert(strcmp(ft_strstr("abc.", "b"), "bc.") == 0);
	assert(strcmp(ft_strstr("aaab.", "aab"), "aab.") == 0);
	printf("ft_strstr OK!\n");
	return (0);
}
