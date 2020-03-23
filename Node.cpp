#include <iostream>
#include "Node.h"

using namespace std;

Node::Node()
{
    this->data = 0;
    this->left = NULL;
    this->right = NULL;
}

Node::Node(int data)
{
    this->data = data;
    this->left = NULL;
    this->right = NULL;
}

Node::Node(const Node& other) 
{
    data = other.data; 
    left = other.left; 
    right = other.right; 

}

Node::~Node()
{
    delete left;
    delete right;

    // printing the node which has been deleted 
    //cout << "Deleting " << this->data << endl;
}

