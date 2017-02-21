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
#include <string>


using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testAdvancedFeatures();
    
public:
    DataStructureController();
    void start();
    void testNodes();
    
    
};

#endif /* DataStructureController_hpp */
