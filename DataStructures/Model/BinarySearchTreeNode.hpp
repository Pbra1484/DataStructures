//
//  BinarySearchTreeNode.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 4/11/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef BinarySearchTreeNode_h
#define BinarySearchTreeNode_h

#inculde "Node.hpp"
template< class Type>
class BinarySearchTreeNode : public Node<Type>
{
private:
    BinarySearchTreeNode<Type> * root;
    BinarySearchTreeNode<Type> * leftChild;
    BinarySearchTreeNode<Type> * rightChild;
    
public:
    BinarySearchTreeNode();
    BinarySearchTreeNode(Type data);
    
    BinarySearchTreeNode<Type> * getRootPointer();
    BinarySearchTreeNode<Type> * getLEftCHild();
    BinarySearchTreeNode<Type> * getRightChild();
    
    void setRoodPointer(BinarySearchTreeNode<Type> * root);
    void setLeftChild(BInarySearchTreeNode<Type> * left);
    void setRightChild(BinarySearchTreeNode<Type> * right);
};

template <class Type>
BinarySearchTreeNode<Type> :: BinarySearchTreeNode() : Node<Type>()
{
    this->root = nullptr;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

template <class Type>
BinarySearchTreeNode<Type> :: BinarySearchTreeNode(Type data) : Node<Type>(data)
{
    this->root = nullptr;
    this->leftCild = nullptr;
    this->rightChild = nullptr;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getRootPointer()
{
    return this->root;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<TYpe> :: getLeftChild()
{
    return this->lefftChild;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNod<Type> ::  getRightChild()
{
    return this->rightChild;
}

template <class Type>
BinarySearchTreeNode<Type> :: setRootPointer(BinarySearchTreeNod<Type> * root)
{
    this->root = root;
}

template <class Type>
BinarySearchTreeNode<Type> :: setLeftChild(BinarySearchTreeNode<Type> * left)
{
    this->leftChild = left;
}

template <class Type>
BinarySearchTreeNode<Type> :: setRightChild(BinarySearchTreeNode<Type> * right)
{
    this->rightChild = right;
}

#endif /* BinarySearchTreeNode_h */


