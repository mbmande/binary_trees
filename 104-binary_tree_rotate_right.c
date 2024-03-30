#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *vot, *t;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	vot = tree->left;
	t = vot->right;
	vot->right = tree;
	tree->left = t;

	if (t != NULL)
		t->parent = tree;
	t = tree->parent;
	tree->parent = vot;
	vot->parent = t;

	if (t != NULL)
	{
		if (t->left == tree)
			t->left = vot;
		else
			t->right = vot;
	}

	return (vot);
}
