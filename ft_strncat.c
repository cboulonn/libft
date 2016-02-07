/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 13:57:51 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/26 22:37:21 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncat(char *s1, const char *s2, size_t n)
{
        int     cd;
        size_t  cs;

        cd = 0;
        cs = 0;
        while (s1[cd] != '\0')
                cd++;
        while (s2[cs] != '\0' && cs < n)
        {
                s1[cd] = s2[cs];
                cd++;
                cs++;
        }
        s1[cd] = '\0';
        return (s1);
}

/*int             main(void)
{
        char s[100];

        bzero(s, 100);
    	ft_strncat(s, "abc", 4);
    	assert(strncmp(s, "abc", 4) == 0);
	printf("ok\n");
    	ft_strncat(s, "123", 4);
    	assert(strncmp(s, "abc123", 4) == 0);
    	printf("OK\n");
    	return (0);
}*/
