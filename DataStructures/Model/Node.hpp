//
//  Node.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/13/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type> * nodePointer;
public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setNextPointer(Node<Type> * pointer);
    Type getNodeData();
    Node<Type> * getNextPointer();
};

/*
Implementaion section
*/

template <class Type>
Node<Type> :: Node()
{
    //Explicity Do NOt instaticate the nodeData data member
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
    
}

template <class Type>
Node<Type> :: Node(Type data, Node<Type> * pointer)
{
    this->nodeData = data;
    this->nodePointer = pointer;
}

template <class Type>
void Node<Type> :: setNodeData(Type value)
{
    nodeData = value;
}

template <class Type>
void Node<Type> :: setNextPointer(Node<Type> * pointer)
{
    this->nodePointer = pointer;
}

template <class Type>
Type Node<Type> :: getNodeData()
{
    return nodeData;
}


template <class Type>
Node<Type> * Node<Type> :: getNextPointer()
{
    return this->nodePointer;
}


























#endif /* Node_hpp */
