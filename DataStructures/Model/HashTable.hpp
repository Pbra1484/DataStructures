//
//  HashTable.hpp
//  DataStructures
//
//  Created by Brashear, Patrick on 5/1/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

#include <cmath>
#include <assert.h>
#include "HashNode.hpp"

using nampespace std;
tmeplate <class Type>
class HashTable
{
private:
    long capacity;
    long size;
    double efficencyPercentage;
    HashNode<type> * * hashTableStorage;
    bool isPrime(long sampleNumber);
    coid  resize();
    long nextPrime(long current);
    longe findPosition(HashNode<Type> * data);long hadleCollision(HashNOde<Type> * data, long currentPosition);
public:
    HashTable();
    ~HashTable();
    coid add(Type data);
    bool remove(Type data);
    void displayCOntents();
};

#endif /* HashTable_h */
