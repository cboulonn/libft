/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:45:34 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/27 15:55:14 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *big, const char *little, size_t len)
{
        const char *begin;
	size_t		i;
	size_t		j;

        if (!*little)
                return ((char *)big);
        i = 0;
        while (*big && i < n)
        {
		j = i;
                begin = big;
                while (*big == *little && j < n && *big)
                {
                        if (little[1] == '\0')
                                return ((char *)begin + i);
			j++;
                        big++;
                        little++;
                }
		i++;
                big = begin;
                big++;
        }
        return (NULL);
}
