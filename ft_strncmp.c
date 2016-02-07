/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 15:18:10 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/26 23:02:49 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[1] != '\0'
	&& i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);

}

int	main(void)
{
assert(ft_strncmp("abc", "abc", 2) == 0);
assert(ft_strncmp("ac", "ab", 2) > 0);
assert(ft_strncmp("aa", "ab", 2) < 0);
printf("OK ft_strncmp\n");
return (0);
}
