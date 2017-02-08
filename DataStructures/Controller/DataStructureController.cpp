//
//  DataStructureController.cpp
//  DataStructures
//
//  Created by Brashear, Patrick on 2/8/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNode.hpp"

using namespace std;
DataStructureController :: DataStructureController()
{
    
}

void DataStructureController :: start()
{
    cout << "starting" << endl;
    
    cout << "Switing to aray testing" << endl;
    testIntArray();
    cout << "Finished Testing" << endl;
}

void DataStructureController :: testIntArray()
{
    cout << "Testing the array" << endl;
}
