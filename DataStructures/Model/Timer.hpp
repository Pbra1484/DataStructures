//
//  Timer.hpp
//  FirstCPlusPlus
//
//  Created by Brashear, Patrick on 1/31/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExecutionTimeInMicroseconds();
};

#endif /* Timer_hpp */
