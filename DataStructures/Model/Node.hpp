//
//  Node.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/13/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type> *
public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setNodePointer(Node<Type> pointer);
    Type getNodeData();
    Node<Type> * getNodePointer();
};
#endif /* Node_hpp */
