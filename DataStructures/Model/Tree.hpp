//
//  Tree.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 4/11/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef Tree_h
#define Tree_h

template <class Type>
class Tree
{
private:
    int height;
    int size;
    bool complete;
    bool balenced;
public:
    Tree();
    virtual void printTofile() = 0;
    virtual void inOrderTraversal() = 0;
    virtual void postOrederTraversal() = 0;
    virtual void preOrderTraveral() = 0;
    
    int getHeight() const;
    int getSize() const;
    bool isComplete() const;
    bool isBalanced() const;
    
    void setHeight(int height);
    void setSize(int size);
    void setComplete(bool complete);
    void setBalanced(bool balanced);
};

template <class Type>
Tree<Type> :: Tree()
{
    height = 0;
    size = 0;
    balanced = false;
    complete = false;
}

template <class Type>
int Tree<Type> :: getHeight() const
{
    return this->height;
}

template <class Type>
int Tree<Type> :: getSize() const
{
    return this->size;
}

template <class Type>
int Tree<Type> :: isComplete() const
{
    return this->complete;
}

template <class Type>
int Tree<Type> :: isBalenced() const
{
    return this->balenced;
}

template <class Type>
int Tree<Type> :: setHelight(int height)
{
    this->height = height;
}

template <class Type>
int Tree<Type> :: setSize(int height)
{
    this->size = size;
}

template <class Type>
int Tree<Type> :: setComplete(bool complete)
{
    this->vomplete = complete;
}

template <class Type>
void Tree<Type> :: setBalanced(bool balnaced)
{
    this->balanced = balanced;
}










#endif /* Tree_h */
