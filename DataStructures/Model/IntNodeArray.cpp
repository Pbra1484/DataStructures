//
//  IntNodeArray.cpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/8/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#include "IntNodeArray.hpp"
#include <assert.h>

IntNodeArray :: IntNodeArray(int size){
    assert(size > 0);
    
    this->size = size;
    this->front = new IntNode();
    
    
    for(int index = 1; index < size; index++){
        IntNode * current = new IntNode();
        current->setNextPointer(front);
        front = current;
    }
    

}
int IntNodeArray :: getFromIndex(int index){
    assert(index >= 0 && index < size);
    int value = 0;
    
    IntNode * current = front;
    
    for(int position = 0; position < index; position++){
        current = current->getNextPointer();
    }
    
    value = current->getNodeData();
    
    return value;
}

void IntNodeArray :: setAtIndex(int index, int value){
    assert(index >= 0 && index < size);
    
    IntNode * current = front;
    
    for(int position = 0; position < index; position++){
        current = current->getNextPointer();
    }
    
    current->setNodeData(value);
}

int IntNodeArray :: getSize()
{
    return size;
}
