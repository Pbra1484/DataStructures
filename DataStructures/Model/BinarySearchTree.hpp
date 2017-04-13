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
    
    void removeNode(BinarySearchTreeNode<Type> * & removeMe);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    
    void printToFile();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
};

template <class Type>
BinarySearchTreeNode<Type> BinarySearchTreeNode() : Tree<Type>()
{
    this->root = nullptr();
}

template <class Type>
BinarySearchTreeNode<Type> ::


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

template <class Type>
void BinarySearchTreeNode<Type> :: insert(Type itemToInsert)
{
    BinarySearchTreeNode<Type> * insertMe = new BinarySearchTreeNode<Type>(itemToInsert);
    BinarySearchTreeNode<Type> * previous = nullptr;
    BinarySearchTreeNode<Type> * current = root;
    
    if(current == nullptr)
    {
        root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getNodeData())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert > current->getNodeData())
            {
                current = current->getRightChild();
            }
            else
            {
                cerr << "Item exist already" << endl;
                delete insertMe;
                return;
            }
        }
        
        if(prevoius->getNodeData() > itemToInsert)
        {
            previous->setLeftChild(insertMe);
        }
        else
        {
            previous->setRightChild(insertMe);
        }
        insertMe->seetRootPointer(prevoius);
    }
}





#endif /* BinarySearchTree_h */
