#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left-child of another node.
 *
 * @parent: A pointer that points  to the node to insert the left child in.
 * @value: The value to store the new node.
 *
 * Return: A pointer to the created node, shows NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
