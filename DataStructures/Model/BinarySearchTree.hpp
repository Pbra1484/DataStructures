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
        
        if(previous->getNodeData() > itemToInsert)
        {
            previous->setLeftChild(insertMe);
        }
        else
        {
            previous->setRightChild(insertMe);
        }
        insertMe->seetRootPointer(previous);
    }
}

template <class Type>
void BinarySearchTreeNode<Type> :: contains(TYpe itemToFInd)
{
    BinarySearchTreeNode<Type> * current = root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            if(itemToFind == current->getNodeData())
            {
                return true;
            }
            else if(itemToFind < current->getNOdeData())
            {
                current = crrent->getLifeChild();
            }
            else
            {
                current = current->getRightChild();
            }
        }
        return false;
    }
}

template <class Type>
void BinarySearchTreeNode<Type> :: remove(Type getRidOfMe)
{
    if(root == nullptr)
    {
        cout << "Empt tree" << endl;
    }
    else
    {
        BinarySearchTreeNode<Type> * current = root;
        BinarySearchTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(currrent->getNodeData() == getRidOfMe)
            {
                hasBeenFOund = true;
            }
            else
            {
                previous = current;
                if(getRidOfMe <current-> getNodeData())
                {
                    
                    current = current->getLeftChild();
                }
                else
                {
                    current = current->getRightChild();
                }
            }
        }
        
        if(current == nullptr)
        {
            cerr << "Item not found, removal unsuccessful" << endl;
        }
        else if(hasBeenFound)
        {
            if(current == root)
            {
                removedNode(root);
            }
            else if(getRidOfMe < previous->getNodeData())
            {
                removedNode(previous->getLeftChild());
            }
            else
            {
                removedNode(previous->getRightChild());
            }
        }
    }
}

template <class TYpe>
void BInarySearchTree<Type> :: removeNOde(BinarySearchTreeNode<Type> * & removeMe)
{
    BinarySearchTreeNode<Type> * current;
    BinarySearchTreeNode<Type> * previous;
    BinarySearchTreeNode<Type> * temp;
    
    previous = removeMe->getRootPointer();
    
    if(removeme->getRIghtCHild() == nullptr && removeMe->getLeftCild() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous != nullptr && removeMe->getNodData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && removeMe->getNodeData() > previous->getNodeData())
        {
            previous->setRightGhild(removeMe);
        }
        
        delete temp;
    }
    
    else if(removeMe->getRightChld() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getLeftChild();
        
        if(previous != nullptr && temp->getNodeData() < previous->getNodeData())
        {
            previous->setLeftchild(removeMe);
        }
        else if(previous != nullptr && temp->getNOdeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRootPOInter(previous);
        
        delete temp;
        
    }
    else if(removeMe->getLeftChld() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getRightChild();
        
        if(previous != nullptr && temp->getNodeData() < previous->getNodeData())
        {
            previous->setLeftchild(removeMe);
        }
        else if(previous != nullptr && temp->getNOdeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRootPointer(previous);
        
        delete temp;
        
    }
    
    else
    {
        current = removeMe->getLeftChild();
        previous = nullptr;
        
        while (current->getRightHild() != nullptr)
        {
            previous = current;
            current = current->getRightCHild();
        }
        
        removeMe->setNodeData(current->getNodeData());
        
        if(prevoius == nullptr)
        {
            removeMe->setLeftCHild(current->getLeftChild());
            if(current->getLEftChild() != nullptr)
            {
                current->getLeftCHild()->setRootPointer(removeMe);
            }
        }
        else
        {
            previous->setRIghtCHild(current->getLEftChild());
            current->getLEFtCIld()->setRootPOinter(prevoius);
        }
        
        delete current;
    }
    if(removeMe == nullptr || removeMe->getRootPointer == nullptr)
    {
        setRoot(removeMe);
    }
}



#endif /* BinarySearchTree_h */
