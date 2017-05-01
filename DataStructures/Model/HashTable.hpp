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
    void  resize();
    long nextPrime(long current);
    longe findPosition(HashNode<Type> * data);long hadleCollision(HashNOde<Type> * data, long currentPosition);
public:
    HashTable();
    ~HashTable();
    coid add(Type data);
    bool remove(Type data);
    void displayContents();
};

template <class TYpe>
HashTable<Type> :: HashTable()
{
    this->capacity = 101;
    this->eggicencyPercentage = .667;
    this->size = 0;
    this->hashTableStorage = HashNode<Type> * [capacity];
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    delete [] hashTableStorage;
}

#endif /* HashTable_h */
