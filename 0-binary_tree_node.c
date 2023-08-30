# include "binary_trees.h"


/**
 * binary_tree_node -  Create a binary tree node.
 * @parent: The parent node.
 * @value: The value to be insterted into the node.
 *
 * Return: The pointer to the newly created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	tempNode = malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);
	tempNode->parent = parent;
	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;
	return (tempNode);
}
