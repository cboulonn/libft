/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 16:56:10 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/26 16:04:12 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*scpy;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] == ' ' && s[i] == '\n' && s[i] == '\t')
		i++;
	j = i;
	while(s[i] != '\0')
	{
		i++;
		j++;
	}
	while (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
	{	
		i--;
		j--;
	}
	i = 0;
	scpy = (char *)malloc(sizeof(char *) * j + 1);
	while (s[i] == ' ' && s[i] == '\n' && s[i] == '\t')
		i++;
	ft_strcpy((char *)(s + i), scpy);
	return (scpy);
}
