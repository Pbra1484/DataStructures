//
//  Timer.cpp
//  FirstCPlusPlus
//
//  Created by Brashear, Patrick on 1/31/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#include "Timer.hpp"
#include <iostream>

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: finishTimer()
{
    executionTime = clock() - executionTime;
}

long Timer :: getExecutionTimeInMicroseconds()
{
    return executionTime;
}

void Timer :: displayTimerInformation()
{
    cout << "It took "<< executionTime << " to execute" << endl;
    cout << "In seconds " << executionTime/CLOCKS_PER_SEC << endl;
}
