#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree.
 * @tree: pointer to the root node of the BST to search
 * @value: value to search in the tree.
 *
 * Return: pointer to the node containing a value equals to @value
 *         if tree is NULL or nothing found, return NULL.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		if (value > node->n)
			node = node->right;
	}
	return (NULL);
}
