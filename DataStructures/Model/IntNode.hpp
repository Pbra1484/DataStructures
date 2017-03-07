//
//  IntNode.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/6/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

class IntNode
{
private:
    int nodeData;
    IntNode * nodePointer;
public:
    //Constructor
    IntNode();
    IntNode(int value);
    /*
     Creates an IntNode with a specified value and next node pointer
     */
    IntNode(int value, IntNode * nextNode);
    
    //Methods
    int getNodeData();
    IntNode * getNextPointer();
    void setNodeData(int value);
    void setNextPointer(IntNode * next);
    
};

#endif /* IntNode_hpp */
