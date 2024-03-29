#include "binary_trees.h"

/**
 * binary_tree_insert_right - =========
 * @parent: ===================
 * @value: ======
 * Return: ==========
 * Description: =========
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *w;

	if (parent == NULL)
		return (NULL);
	w = binary_tree_node(parent, value);
	if (w == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		w->right = parent->right;
		parent->right->parent = w;
	}
	parent->right = w;
	return (w);
}
