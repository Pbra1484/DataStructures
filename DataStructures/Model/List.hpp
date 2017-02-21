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
private:
    List();
    List(const List<Type> & source);
    ~List<Type>();
    
    void addAtIndex(int index, Type value);
    void add(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    Type getFromIndex(int index);
    bool contain(Type data);
    int getSize() const;
    Node<Type> * getFront() const;
};

template <class Type>
List<Type> :: List()
{
    
}

template <class Type>
List<Type> setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    Type value;
    Node<Type> * current = front;
    
    for(int position = 1; position < index; position++)
    {
        current = current->getNodePointer();
    }
    
    current->setNodeData(calue);
}

#endif /* List_h */
