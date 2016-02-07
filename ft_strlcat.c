/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 14:32:03 by cboulonn          #+#    #+#             */
/*   Updated: 2015/12/14 17:48:15 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <strings.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	
	i = ft_strlen(dst);
	if (i >= size)
		return (ft_strlen(src) + size);
	ft_strncat(dst, src, size - i -1);
	return (ft_strlen(src) + i);
}

int             main(void)
{
        char s[100];

        bzero(s, 100);
        ft_strlcat(s, "abc", 4);
        assert(strncmp(s, "abc", 4) == 0);
        ft_strlcat(s, "123", 4);
        assert(strncmp(s, "abc123", 4) == 0);
        printf("OK\n");
        return (0);
}
