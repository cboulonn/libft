/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:37:25 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/28 15:38:40 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char            *ft_strmapi(char const *s, char (*f)(unisgned int, char))
{
        int length;
        int i;
        char *str2;

        i = 0;
        length = ft_strlen(s);
        str2 = (char*)malloc(sizeof(char) * length + 1);
        if (str2 != NULL)
        {
                while (i < length)
                {
                        str2[i] = (*f)(i, s[i]);
                        i++;
                }
        }
        return (str2);
}