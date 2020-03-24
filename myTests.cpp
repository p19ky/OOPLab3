#include "myTests.h"
#include "Node.h"
#include "BinaryTree.h"
#include <iostream>
#include <vector>
using namespace std;

void TestInPostPreOrder()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    BinaryTree BT(arr, 0, n);

    cout << "\nPreorder traversal of binary tree is \n";
    BT.printPreorder(BT.getRoot());

    cout << "\nInorder traversal of binary tree is \n";
    BT.printInorder(BT.getRoot());

    cout << "\nPostorder traversal of binary tree is \n";
    BT.printPostorder(BT.getRoot());
}

void TestCount()
{
    cout << "\n\nTest build and count\n";

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    BinaryTree BT(arr, 0, n);

    cout << "\nNumber of nodes: " << BT.countNodes(BT.getRoot());
    cout << "\nNumber of edges: " << BT.countEdges(BT.getRoot());
    cout << "\nHeight: " << BT.height(BT.getRoot());
}

void TestInsert()
{
    BinaryTree BT;
    BT.insert(BT.getRoot(), 1);
    BT.insert(BT.getRoot(), 4);
    BT.insert(BT.getRoot(), 2);
    BT.insert(BT.getRoot(), 3);
    BT.insert(BT.getRoot(), 6);
    BT.insert(BT.getRoot(), 5);
    BT.deleteNode(BT.getRoot(), 5);
    BT.deleteNode(BT.getRoot(), 4);

    cout << "\nTest insert and delete";
}
