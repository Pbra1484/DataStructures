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
protected:
    BinarySearchTreeNood<Type> * root;
    
    int calculateSize(BinarySearchTreeNode<Type> * root);
    int calculteHeight(BinarySearchTreeNode<Type> * root);
    bool isBalanced(BinarySearchTreeNode<Type> * root);
    bool isComplete(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOerderTraveral(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);
    
    void removeNode(BinarySearchTreeNode<Type> * removeMe);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    
    int getSize();
    int getHEight();
    bool isComplete();
    bool isBalanced();
    
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
BinarySearchTreeNode<Type> :: ~BinarySearchTree()
{
    
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getRoot()
{
    return this->root;
}

template <class Type>
void BinarySearchTreeNode<Type> :: setRoot(BinarySearchTreeNode<Type> * root)
{
    this->root = root;
}

template <class Type>
void BinarySearchTreeNode<Type> :: inOrderTraversal()
{
    inOrderTraaversal(root);
}

template <class Type>
BinarySearchTreeNode<Type> :: preOrderTraversal()
{
    postOrderTraversal(root);
}

template <class Type>
int BinarySearchTreeNode<Type> :: calculateSize(BinarySearchTreeNode<Type> * start)
{
    return 0;
}

template <class Type>
void BinarysearchTree<Type> :: inOrderTraversal(BinarySearchTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    {
        inOrderTraversal(inStart->getLeftChild());
        cout << "node Contents: " << inStart->getNodeData() << endl;
        inOrderTraversal(inStart->getRightChild());
    }
}

template <class <Type>
void BinarySearchTree<Type> :: perOrderTraversal(BinarySearchTreeNode<Type> * perStart)
{
    if(postStart != nullptr)
    {
        postOrderTraversal(postStart->getLeftChild());
        postOrderTraversal(postStart->getRigthChild());
        cout << "Node Contents: " << postStart->getNodeData() << endl;
    }
}

template <class Type>
void BinarySearchTreeNode<Type><Type> :: postOrderTraversal(BinarySearchTreeNode<Type> * postStart)
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
            else if(itemToFind < current->getNodeData())
            {
                current = crrent->getLeftChild();
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
            if(current->getNodeData() == getRidOfMe)
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
void BInarySearchTree<Type> :: removeNode(BinarySearchTreeNode<Type> * removeMe)
{
    BinarySearchTreeNode<Type> * current;
    BinarySearchTreeNode<Type> * previous;
    BinarySearchTreeNode<Type> * temp;
    
    previous = removeMe->getRootPointer();
    
    if(removeme->getRightChild() == nullptr && removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous != nullptr && removeMe->getNodeData() < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && removeMe->getNodeData() > previous->getNodeData())
        {
            previous->setRightGhild(removeMe);
        }
        
        delete temp;
    }
    
    else if(removeMe->getRightChild() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getLeftChild();
        
        if(previous != nullptr && temp->getNodeData() < previous->getNodeData())
        {
            previous->setLeftchild(removeMe);
        }
        else if(previous != nullptr && temp->getNodeData() > previous->getNodeData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRootPointer(previous);
        
        delete temp;
        
    }
    else if(removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getRightChild();
        
        if(previous != nullptr && temp->getNodeData() < previous->getNodeData())
        {
            previous->setLeftchild(removeMe);
        }
        else if(previous != nullptr && temp->getNodeData() > previous->getNodeData())
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
        
        while (current->getRightChild() != nullptr)
        {
            previous = current;
            current = current->getRightChild();
        }
        
        removeMe->setNodeData(current->getNodeData());
        
        if(previous == nullptr)
        {
            removeMe->setLeftCHild(current->getLeftChild());
            if(current->getLeftChild() != nullptr)
            {
                current->getLeftChild()->setRootPointer(removeMe);
            }
        }
        else
        {
            previous->setRIghtCHild(current->getLeftChild());
            current->getLeftChild()->setRootPointer(previous);
        }
        
        delete current;
    }
    if(removeMe == nullptr || removeMe->getRootPointer == nullptr)
    {
        setRoot(removeMe);
    }
}

template <class Type>
int BinarySearchTreeNode<Type> :: getSize()
{
    return calculateSize(root);
}

template <class Type>
int BinarySearchTreeNode<Type> :: getHeight()
{
    return calculateHeight(root);
}

template <class Type>
bool BinarySearchTreeNode<Type> :: isBalanced()
{
    return isBalanced(root);
}

template <class Type>
bool BinarySearchTreeNode<Type> :: isComplete()
{
    return isComplete(root);
}

template <class Type>
int BinarySearchTreeNode<Type> :: calculateSize(BinarySearchTreeNode<Type> * start)
{
    int count = 1;
    if(start == nullptr)
    {
        retur 0;
    }
    else
    {
        count += calculateSize(start->getLeftCHild());
        count += calculateSize(start->getRightCHild());
        return count;
    }
}

template <class Type>
int BinarySearchTreeNode<Type> :: calculateHeight(BInarySearchTreeNdoe<Type> * start)
{
    if(Start == nullptr)
    {
        return 0;
    }
    else
    {
        return 1 + max(caluclateHeight(start->getLeftChild()), calculateHeight(start->getRightChild()));
    }
}

template <class Type>
bool BinarySearchTreeNode<Type> :: isBalanced(BinarySearchTreeNode<Type> * start)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(start == null ptr)
    {
        return true;
    }
    
    leftHeight = calculateHeight(start->getLeftChild());
    reightHeifht = calculateHeight(start->getRightCHild());
    
    int heightDifference = abs(leftHeight-rightHeight);
    bool leftBalanced = isBalanced(start->getLeftChild());
    bool rightBalanced = isBalanced(start->getRightChild());
    
    if(heightDifference <= 1 && leftBalanced  && rightBalanced)
    {
        
        return true;
    }
    
    return false;
}


























































#endif /* BinarySearchTree_h */
