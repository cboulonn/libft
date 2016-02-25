/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 14:57:00 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/25 16:30:54 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;

	p = NULL;
	if (size != 0)
	{
		if ((p = (char *)malloc(sizeof(char) * (size + 1))))
			ft_bzero(p, size);
	}
	return (p);
}
