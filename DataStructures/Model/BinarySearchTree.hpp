//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 4/11/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

template <class Type>
class BinarySearchTree : public Tree<Type>
{
private:
    BinarySearchTreeNood<Type> * root;
    
    int calculateSize(BinarySearchTreeNode<Type> * root);
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOerderTraveral(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
};

template <class Type>
BinarySearchTreeNode<Type> BinarySearchTreeNode() : Tree<Type>()
{
    this->root = nullptr();
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getRoot()
{
    return thhis->root;
}

template <class Type>
void BinarySearchTreeNode<Type> :: setRoot(BinarySearchTreeNode<Type> * root)
{
    this->root = root;
}

template <class Type>
void BinarySearchTreeNode<Type> :: inOrderTraversal()
{
    
}

template <class Type>
BinarySearchTreeNode<Type> :: preOrderTraversal()
{
    
}

template <class Type>
int BinarySearchTreeNode<Type> :: calculateSize(BinarySearchTreeNode<Type> * start)
{
    return 0;
}

template <class Type>
void BinarysearchTree<Type> :: inOrderTraversal(BinarySearchTreeNode<Type> * inStart)
{
    
}

template <class <Type>
void BinarySearchTree<Type> :: perOrderTraversal(BinarySearchTreeNode<Type> * perStart)
{
    
}

template <class Type>
void BinarySearchTreeNode<Type><Type> :: postorderTraversal(BinarySearchTreeNode<Type> * postStart)
{
    
}






#endif /* BinarySearchTree_h */
