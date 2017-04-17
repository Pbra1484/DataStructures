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
#include "../Model/BinarySearchTree.hpp"

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
//    testFoodQueue();
//    testCurcularList();
//    testDoubleList();
//    testIntStack();
    testList();
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
    
    cout << "should be 1 2 3" << endl;
    for(int index = 0; index < list.getSize(); index++)
    {
        cout << list.getAtIndex(index) << endl;
    }
    
    list.remove(1);
    list.setAtIndex(1, 2);
    
    cout << "shuld be 1 2" << endl;
    
    for(int index = 0; index < list.getSize(); index++)
    {
        cout << list.getAtIndex(index) << endl;
    }
    
    cout << "should be 1 and is " << list.getFront()->getNodeData() << endl;
    
    cout << "should be 2 and is " << list.getEnd()->getNodeData() << endl;
}

void DataStructureController :: testIntStack()
{
    Stack<int> numbers;
    numbers.add(0);
    numbers.push(1);
    
    cout << "the top is " << numbers.peek() << " and should be 1" << endl;
    
    numbers.push(2);
    
        cout << "the size is " << numbers.getSize() << " and should be 3" << endl;
    
    cout << "the top is " << numbers.peek() << " and should be 2" << endl;
    
    int removed = numbers.remove(2);
    
    cout << "the revomed value is " << removed << " and should be 2" << endl;
    
    numbers.add(2345);
    numbers.add(202350926);
    
    cout << "the size is " << numbers.getSize() << " and should be 4" << endl;
    
    numbers.pop();
    
        cout << "the size is " << numbers.getSize() << " and should be 3" << endl;
    
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

void DataStructureController :: testCurcularList()
{
    CircularList<int> roundInts;
    
    roundInts.add(0);
    roundInts.add(1);
    roundInts.add(2);
    roundInts.add(3);
    
    cout << "this should be 1 and is " << roundInts.getFromIndex(1) << endl;
    
    roundInts.remove(1);
    
    cout << "this should be 2 and is " << roundInts.getFromIndex(1) << endl;
    
    roundInts.setAtIndex(1, 9001);
    
    cout << "This should be over 9000 and is " << roundInts.getFromIndex(1) << endl;
}

void DataStructureController :: testDoubleList()
{
    DoubleList<int> dInts;
    
    dInts.add(0);
    dInts.add(1);
    dInts.add(2);
    dInts.add(3);
    
    cout << "this should be 1 and is " << dInts.getFromIndex(1) << endl;
    
    dInts.remove(1);
    
    cout << "this should be 2 and is " << dInts.getFromIndexFast(1) << endl;
    
    
}

void DataStructureController :: testBinarySearchTreeOperations()

{
    
    BinarySearchTree<int> numbers;
    
    numbers.insert(9843);
    
    numbers.insert(10);
    
    numbers.insert(43);
    
    numbers.insert(-123);
    
    numbers.insert(23465);
    
    numbers.insert(10); // won't go in
    
    numbers.insert(43243);
    
    numbers.insert(-45677654);
    
    numbers.insert(92165);
    
    
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    numbers.inOrderTraversal();
    
    
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    
    cout << "Balanced should be false || 0 and is: " << numbers.isBalanced() << endl;
    
}








