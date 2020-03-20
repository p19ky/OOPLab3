#include <iostream>
#include "Node.h"
#include "BinaryTree.h"

int main()
{
    Node* node1 = new Node(2);
    Node* node2 = new Node(3);
    Node* node3 = new Node(4);
    Node* node4 = new Node(5);

    // Creating the binary tree 
    BinaryTree BT;
    BT.root = new Node(1);
    
    BT.root->left = node1; //->set_left(*node1);
    BT.root->right = node2; //->set_right(*node2);
    BT.root->left->left = node3; //->set_left(*node3);
    BT.root->left->right = node4; //->set_right(*node4)
}

