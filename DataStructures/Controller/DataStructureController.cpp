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
#include "../Model/List.hpp"

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
//    testAdvancedFeatures();
//    testNodes();
//    cout << "Switing to aray testing" << endl;
//    testIntArray();
    testFoodQueue();
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

void DataStructureController:: testList()
{
    List<int> list;
    list.addFront(1);
    list.addEnd(3);
    list.addAtIndex(1, 2);
    
    for(int index = 0; index < list.getSize(); index++)
    {
        cout << list.getAtIndex(index) << endl;
    }
    
    list.remove(1);
    list.setAtIndex(1, 2);
    
    for(int index = 0; index < list.getSize(); index++)
    {
        cout << list.getAtIndex(index) << endl;
    }
}


void DataStructureController :: testIntStack()
{
    Stack<int> numbers;
    numbers.add(3);
    numbers.push(275);
    
    cout << "the top is " << numbers.peek() << " and should be 275" << endl;
    
    numbers.push(43);
    
    
}

void DataStructureController :: testFoodQueue()
{
    Queue<FoodItem> tastyFood;
    FoodItem dunkin("grows stuff");
    
    tastyFood.enqueue(dunkin);
    FoodItem boring;
    tastyFood.add(boring);
    
    cout << "thie size is " << tastyFood.getSize() << " and should be 2" << endl;
    
    FoodItem removed = tastyFood.dequeue();
    cout << "The item removed from the queue was: " << removed.getFoodName() << " and should be : grows stuff" << endl;
    
    cout << "the size is " << tastyFood.getSize() << " and should be 1"<< endl;
    
    tastyFood.add(dunkin);
    
    cout << "the size is " << tastyFood.getSize() << " and should be 2" << endl;
    
    tastyFood.remove(0);
    
    cout << "the front of the queue is " << tastyFood.peek().getFoodName() << endl;
    
    
}















