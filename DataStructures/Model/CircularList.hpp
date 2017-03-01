//
//  CircularList.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 3/1/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "DoublyLinkedList.hpp"

template <class Type>
class CircularList : public DoublyLinkedList<Type>
{
public:
    
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    Type remove(int index);
    //afoehter methids as nedid
};

template <class Type>
CircularLlist<Type> :: CircularList() : DoublyLinkedList()
{
    
}

template <class Type>
void CircularList<Type> :: add(Type data)
{
    
}
#endif /* CircularList_h */
