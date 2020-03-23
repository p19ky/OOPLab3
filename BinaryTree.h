#pragma once
#include <iostream>
#include "Node.h"
#include <vector>
class Node;
using namespace std;

class BinaryTree
{
public:

    // Root of Binary Tree 
    Node* root;
    friend class Node;

public:

    //Default Constructor
    BinaryTree();

    //Constructor function to assign data to the root node of the Tree
    BinaryTree(int data);

    //Destructor
    ~BinaryTree();

    bool isEmpty();

    Node* insert(Node* node, int data);

    //builds the binary tree
    Node* build_tree(int arr[], Node* root, int i, int n);

    /* Given a binary tree, print its nodes according to the "bottom-up" postorder traversal. */
    void printPostorder(Node* node);

    /* Given a binary tree, print its nodes in inorder*/
    void printInorder(Node* node);

    /* Given a binary tree, print its nodes in preorder*/
    void printPreorder(Node* node);

    //returns number of Nodes
    int countNodes(Node* n);

    //returns number of Edges
    int countEdges(Node* n);

    //returns height of Binary Tree
    int height(Node* n);

    Node* minValueNode(Node* node);

    Node* deleteNode(Node* root, int data);
};