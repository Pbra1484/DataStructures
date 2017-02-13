//
//  DataStructureController.cpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/8/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"

using namespace std;
DataStructureController :: DataStructureController()
{
    wordNode = Node<string>("");
    numberNode = Node<int>();
}

void DataStructureController:: testNodes()
{
    cout << "Node contents for Node<string>" <<endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getNodeData() << endl;
}

void DataStructureController :: start()
{
    cout << "starting" << endl;
    
    testNodes();
//    cout << "Switing to aray testing" << endl;
//    testIntArray();
    cout << "Finished Testing" << endl;
}

void DataStructureController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for(int index = 0; index < temp.getSize(); index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
    for(int index = 0; index < temp.getSize(); index++)
    {
        temp.setAtIndex(index, index);
    }
    
    for(int index = 0; index < temp.getSize(); index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
}
