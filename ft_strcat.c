/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 11:19:12 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/26 21:47:56 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int	cd;
	int	cs;

	cd = 0;
	cs = 0;
	while (s1[cd] != '\0')
		cd++;
	while (s2[cs] != '\0')
	{
		s1[cd] = s2[cs];
		cd++;
		cs++;
	}
	s1[cd] = '\0';
	return (s1);
}

int		main(void)
{
	char s[100];

	bzero(s, 100);
    	ft_strcat(s, "abc");
    	assert(strcmp(s, "abc") == 0);
	printf("ok\n");
    	ft_strcat(s, "123");
    	assert(strcmp(s, "abc123") == 0);
	printf("OK\n");
	return (0);
}
