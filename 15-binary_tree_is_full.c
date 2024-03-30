#include "binary_trees.h"

/**
 * full - =====
 * @tree: ======
 * Return: ====
 */

int full(const binary_tree_t *tree)
{

	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    full(tree->left) == 0 ||
		    full(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - ===
 * @tree: ========
 * Return: ==
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (full(tree));
}
