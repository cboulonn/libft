/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 10:56:00 by cboulonn          #+#    #+#             */
/*   Updated: 2016/03/02 13:33:17 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (*root)
	{
		if (cmpf(item, (*root)->item) < 0)
			ft_btree_insert_data(&(*root)->left, item, cmpf);
		else
			ft_btree_insert_data(&(*root)->right, item, cmpf);
	}
	else
		*root = ft_btree_create_node(item);
}
