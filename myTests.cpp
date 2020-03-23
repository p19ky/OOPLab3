#include "myTests.h"
#include "Node.h"
#include "BinaryTree.h"
#include <iostream>
#include <vector>
using namespace std;

void TestInPostPreOrder()
{
    BinaryTree BT;
    int arr[] = { 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    BT.root = BT.build_tree(arr, BT.root, 0, n);

    cout << "\nPreorder traversal of binary tree is \n";
    BT.printPreorder(BT.root);

    cout << "\nInorder traversal of binary tree is \n";
    BT.printInorder(BT.root);

    cout << "\nPostorder traversal of binary tree is \n";
    BT.printPostorder(BT.root);
}

void TestCount()
{
    cout << "\n\nTest build and count\n";

    BinaryTree BT;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    BT.root = BT.build_tree(arr, BT.root, 0, n);

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