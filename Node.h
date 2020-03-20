#pragma once
#include <iostream>

using namespace std;

class Node {
public:

    //public to avoid getters and setters
    int data;
    Node* left;
    Node* right;

public:
    //Default Constructor
    Node();

    // Constructor function to assign data to the node 
    Node(int data);

    // Destructor function to delete the tree node
    ~Node();

    //copy constructor
    Node(const Node& other);


};