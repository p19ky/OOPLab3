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

BinaryTree::BinaryTree(int arr[], int i, int n)
{
    this->root = build_tree(arr,this->root,i,n);
}

BinaryTree::~BinaryTree()
{
    delete root;
}

Node* BinaryTree::build_tree(int arr[], Node* root, int i, int n)
{
    // Base case for recursion 
    if (i < n)
    {
        Node* temp = new Node(arr[i]);
        root = temp;

        // insert left child 
        root->left = build_tree(arr, root->left, 2 * i + 1, n);

        // insert right child 
        root->right = build_tree(arr, root->right, 2 * i + 2, n);
    }
    return root;
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
}

void BinaryTree::printPostorder(Node* node)
{
    if (node == NULL)
        return;

    // first recur on left subtree 
    printPostorder(node->left);

    // then recur on right subtree 
    printPostorder(node->right);

    // now deal with the node 
    cout << node->data << " ";
}

void BinaryTree::printInorder(Node* node)
{
    if (node == NULL)
        return;

    /* first recur on left child */
    printInorder(node->left);

    /* then print the data of node */
    cout << node->data << " ";

    /* now recur on right child */
    printInorder(node->right);
}

void BinaryTree::printPreorder(Node* node)
{
    if (node == NULL)
        return;

    /* first print data of node */
    cout << node->data << " ";

    /* then recur on left sutree */
    printPreorder(node->left);

    /* now recur on right subtree */
    printPreorder(node->right);
}

int BinaryTree::countNodes(Node* n)
{
    int ct = 1;

    if (n->left != NULL)
        ct += countNodes(n->left);

    if (n->right != NULL)
        ct += countNodes(n->right);

    return ct;
}

int BinaryTree::countEdges(Node* n)
{
    return countNodes(n) - 1;
}

int BinaryTree::height(Node* n)
{
    if (n == NULL)
        return 0;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = height(n->left);
        int rDepth = height(n->right);

        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
     
}

Node* BinaryTree::minValueNode(Node* node)
{
    Node* current = node;

    /*loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

Node* BinaryTree::deleteNode(Node* root, int data)
{
    // base case
    if (root == NULL) return root;

    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (data < root->data)
        root->left = deleteNode(root->left, data);

    // If the key to be deleted is greater than the root's key,
    // then it lies in right subtree
    else if (data > root->data)
        root->right = deleteNode(root->right, data);

    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        Node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}