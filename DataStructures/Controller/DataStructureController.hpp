//
//  DataStructureController.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/8/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef DataStructureController_hpp
#define DataStructureController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.hpp"
#include "../Model/FoodItem.hpp"
#include "../Model/Graph.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Queue.hpp"
#include "../Model/CircularList.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/Timer.hpp"
#include <string>


using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testAdvancedFeatures();
    void testList();
    void testIntStack();
    void testFoodQueue();
    void testCurcularList();
    void testDoubleList();
    void testBinarySearchTreeOperations();
    void testAVLTreeOperations();
    void testAVLData();
    void testBinarySearchData();
public:
    DataStructureController();
    void start();
    void testNodes();
    
    
};

#endif /* DataStructureController_hpp */
