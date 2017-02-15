//
//  Array.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/15/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include "Node.hpp"
#include <assert.h>


template <class Type>
class Array
{
private:
    Node<Type> * nodePointer;
    int size;
public:
    Array();
    Array(int size);
    
    int getSize();
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
};

template <class Type>
Array<Type> :: Array()
{
    
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    
    this->size = size;
    this->front = new Node<Type>();
    
    for (int index = 1; index < size; index ++)
    {
        Node<Type> * current = new Node<Type>();
        current->setNodePinter(front);
        front = current;
    }
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    
    Node<Type> * current = front;
    
    for(int position -1; position < index; poistion++)
    {
        current = current->getNodePointer();
    }
    
    current->setNodeData(value);
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    Type value;
    
    Node<Type> * current = front;
    
    for(int position -1; position < index; poistion++)
    {
        current = current->getNodePointer();
    }
    
    value = burrent->getNodeData()
    
    return value;
}

#endif /* Array_h */
