#pragma once
#include <iostream>
#include "Node.h"

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

};

