#include "binary_trees.h"

/**
 * binary_tree_balance - ========
 * @tree: ===========
 * Return: ====
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree)
		return (binary_tree_ght(tree->left) - binary_tree_ght(tree->right));

	return (0);
}

/**
 * binary_tree_ght - ========
 * @tree: ==
 * Return: ==
 */

size_t binary_tree_ght(const binary_tree_t *tree)
{

	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_ght(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_ght(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
