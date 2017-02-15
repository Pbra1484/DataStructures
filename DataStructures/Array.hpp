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
#include <asert.h"


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

#endif /* Array_h */
