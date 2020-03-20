#include <iostream>
#include "Node.h"
#include "BinaryTree.h"

using namespace std;

BinaryTree::BinaryTree()
{
    root = NULL;
}

BinaryTree::BinaryTree(int data)
{
    root = new Node(data);
}

BinaryTree::~BinaryTree()
{
    delete root;
}

bool BinaryTree::isEmpty()
{
    if (root == NULL)
        return true;
    return false;
}

Node* BinaryTree::insert(Node* node, int data)
{
    /* 1. If the tree is empty, return a new,
        single node */
    if (node == NULL)
        return(node = new Node(data));
    else
    {
        /* 2. Otherwise, recur down the tree */
        if (data <= node->data)
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);

        /* return the (unchanged) node pointer */
        return node;
    } //

