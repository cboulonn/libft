/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 16:14:25 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/23 16:34:24 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		len_s;

	len_s = ft_strlen(s);
	tab = (char **)malloc(sizeof(char *) * len_s + 1);



}

