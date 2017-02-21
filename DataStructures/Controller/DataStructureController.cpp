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
#include "../Model/Array.hpp"

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
    testAdvancedFeatures();
//    testNodes();
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

void DataStructureController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    
    if(showDestructor < 1)
    {
        Array<string> words = Array<string>(5);
        cout << "Destrouctor mesages next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, " in the last spot");
    Array<string> copiedWords = Array<string>(words);
    
    cout << "These should match:" << endl;
    cout << words.getFromIndex(0) << " should be the same as " << copiedWords.getFromIndex(0) << endl;
    
    copiedWords.setAtIndex(2, "Changed the contents of the copied Array");
    
}




















