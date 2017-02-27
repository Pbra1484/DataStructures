//
//  List.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/21/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef List_h
#define List_h

#include "Node.hpp"
#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class List
{
public:
    int size;
    Node<Type> * front;
    Node<Type> * end;
private:
    List();
    List(const List<Type> & source);
    ~List<Type>();
    
    void addAtIndex(int index, Type value);
    void addFront(Type value);
    void addEnd(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    Type getAtIndex(int index);
    bool contain(Type data);
    int getSize() const;
    Node<Type> * getFront() const;
};

template <class Type>
List<Type> :: List()
{
    
}

template <class Type>
Type List<Type> :: getAtIndex(int index)
{
    assert(index >= 0 && index < size);
    Node<Type> * current = front;
    
    for(int position = 1; position < index; position++)
    {
        current = current->getNodePointer();
    }
    
    return current->getData();
    
}

template <class Type>
Type List<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    Type value;
    Node<Type> * current = front;
    
    for(int position = 1; position < index; position++)
    {
        current = current->getNodePointer();
    }
    
    value = current->getData();
    current->setNodeData(data);
    
    return value;
}

tamplate <class Type>
void List<Type> :: addFront(Type value)
{
    if(size == 0)
    {
        Node<Type> * first = new Node<Type>(value);
        this->front = first;
        this->end = first;
    }
    else
    {
        Node<Type * newFFirst = new Node<Type>();
        newFirst->setNodeData(value);
        newFirst->setNodePointer(front);
        this->front = newFirst;
    }
    size++;
}

template <class Type>
void List<Type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this->front = added;
        this->end = added;
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
    size++;
}

template <class Type>
void List<Type> :: addAtIndex(Type data)
{
    assert(index >= 0 && index <= size);
    
    if(index == 0)
    {
        addFront(value);
    }
    else if(index == size)
    {
        addEnd(value);
    }
    else
    {
        Node<Type> * insertedNode = new Node<Type>(value);
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNodePointer();
        }
        previous->setNodePointer(insertedNode);
        insertedNode->setNodePointer(current);
        
        size++;
    }
}

template <class Type>
Type List<Type> :: remove(int index)
{
    assert(index >= 0 && index < size);
    Type removedData;
    
    Node<Type> * current = front;
    Node<Type> * prvious = nullptr;
    Node<Type> * toBeRemoved = nullptr;
    
    if(index == 0)
    {
        toBeRemoved = front;
        this->front = front->getNodePointer();
    }
    else if(index == size - 1)
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getNodePointer();
        }
        
        toBeRemoved = current;
        previous->setNodePointer(nullptr);
        this->end = previous;
    }
    else
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getNodePointer();
        }
        
        toBeRemoved = current;
        current = toBeRomoved->getnodePointer();
        previous->setNodePointer(current);
    }
    removed = toBeRemoved->getNodeData();
    delet toBeRemoved;
    size--;
    return removed;
    
    
}

template <class Type>
int List<Type> :: getSize()
{
    return size;
}





















































































#endif /* List_h */
