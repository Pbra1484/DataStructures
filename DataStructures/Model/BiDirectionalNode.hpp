//
//  BiDirectionalNode.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/27/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

template <class Type>
class BidirectionalNode : public Node<Type>
{
private:
    BiDirecitonalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type nodeData;
public:
    BiDirecitonalNode();
    BiDirectionalNdoe(Type Data);
    BiDirectionalNode(Typed data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
    
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node<Type>()
{
    
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    
}

#endif /* BiDirectionalNode_h */
