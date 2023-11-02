#include "binary_trees.h"

/**
 * bst_search - Searches for a valu
 * @tree: Pointer to the root node
 * @value: The value to searc
 * Return: Pointer to the node containin
 */
bst_t *bst_search(const bst_t *tree, int value)
{
if (tree == NULL)
return (NULL);

if (value == tree->n)
return (bst_t *)tree;

if (value < tree->n)
return bst_search(tree->left, value);
else
return bst_search(tree->right, value);
}

