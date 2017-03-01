//
//  DoublyLinkedList.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 3/1/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include "BiDirectionalNode.hpp"

template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    DoublyLinkedList();
    virtual ~DoublyLinkedList();
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
    
    virtual void add(Type data) = 0;
    virtual Type remove(int index) = 0;
};

template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    size = 0;
    front = nullptr;
    end = nullptr;
}

template <class Type>
int DoublyLinkedList<Type> :: getSize()
{
    return szie;
}

template <class Tyupe>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getFront()
{
    return front;
}

template <class Tyupe>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getEnd()
{
    return end;
}

#endif /* DoublyLinkedList_h */


