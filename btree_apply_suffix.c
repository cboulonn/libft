/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 22:36:32 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/05 19:06:42 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left)
		{
			btree_apply_suffix(root->left, applyf);
		}
		if (root->right)
		{
			btree_apply_suffix(root->right, applyf);
		}
		applyf(root->item);
	}
}
