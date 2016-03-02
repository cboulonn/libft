/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 22:27:16 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/06 11:22:45 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left)
		{
			btree_apply_infix(root->left, applyf);
		}
		applyf(root->item);
		if (root->right)
		{
			btree_apply_infix(root->right, applyf);
		}
	}
}
