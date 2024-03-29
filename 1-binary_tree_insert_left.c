#include "binary_trees.h"

/**
 * binary_tree_insert_left - =====
 * @parent: ==========
 * @value: ====
 * Return: ============
 * Description: ====================
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *w;

	if (parent == NULL)
		return (NULL);

	w = binary_tree_node(parent, value);
	if (w == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		w->left = parent->left;
		parent->left->parent = w;
	}
	parent->left = w;
	return (w);
}
