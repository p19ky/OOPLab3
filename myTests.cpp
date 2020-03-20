#include "myTests.h"
#include "Node.h"
#include "BinaryTree.h"
#include <iostream>
using namespace std;

void TestInPostPreOrder()
{
    BinaryTree BT;
    BT.root = new Node(1);

    BT.root->left = new Node(2);
    BT.root->right = new Node(3);
    BT.root->left->left = new Node(4);
    BT.root->left->right = new Node(5);

    cout << "\nPreorder traversal of binary tree is \n";
    BT.printPreorder(BT.root);

    cout << "\nInorder traversal of binary tree is \n";
    BT.printInorder(BT.root);

    cout << "\nPostorder traversal of binary tree is \n";
    BT.printPostorder(BT.root);
}

void TestCount()
{
    BinaryTree BT;
    BT.root = new Node(1);

    BT.root->left = new Node(2);
    BT.root->right = new Node(3);
    BT.root->left->left = new Node(4);
    BT.root->left->right = new Node(5);
    BT.root->right->left = new Node(6);
    BT.root->right->right = new Node(7);
    BT.root->left->left->left = new Node(8);
    BT.root->left->left->right = new Node(9);

    cout << "\nNumber of nodes: " << BT.countNodes(BT.root);
    cout << "\nNumber of edges: " << BT.countEdges(BT.root);
    cout << "\nHeight: " << BT.height(BT.root);
}

void TestInsert()
{
    BinaryTree BT;
    Node* root = new Node(1);
    BT.root = root;
    BT.insert(root, 4);
    BT.insert(root, 2);
    BT.insert(root, 3);
    BT.insert(root, 6);
    BT.insert(root, 5);
    BT.deleteNode(root, 5);
    BT.deleteNode(root, 4);

    cout << "\nTest insert and delete";
}