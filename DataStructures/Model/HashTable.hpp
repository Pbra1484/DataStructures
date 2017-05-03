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
    void resize();
    long nextPrime(long current);
    longe findPosition(HashNode<Type> * data);long hadleCollision(HashNOde<Type> * data, long currentPosition);
public:
    HashTable();
    ~HashTable();
    coid add(Type data);
    bool remove(Type data);
    void displayContents();
    int getSize();
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

template <class Type>
int HashTable<Type> :: nextPrime()
{
    int nextPrime = (this->capacity * 2) = 1;
    
    while(!isPrime(nextPrime))
    {
        nextPrime += 2;
    }
    return nextPrime;
}

template <class Type>
bool HashTable<Type> :: isPrime(long candidateNumber)
{
    if(candidateNumer<= 1)
    {
        return false;
    }
    else if(candidateNumber == 2 || candidateNumber == 3)
    {
        return true;
    }
    else if(candidateNumber % 2 == 0)
    {
        retrun false;
    }
    else
    {
        for(int next = 3; next <= swrt(candidateNumber) +1; next += 2)
        {
            if(candidateNumber % next == 0)
            {
                return false;
            }
        }
        return  true;
    }
}

template <class Type>
long HashTable<Type> :: f indPostion(HashNode<Type> * data)
{
    long insertPosistion = data->getKey() % this->capacity;
    return insertPosition;
}

template <class Type>
long HashTable<Type> :: handleCollision(HashNode<Type> * data, long currentPosition)
{
    long shift = 17;
    
    for(long position = currentPosition + shift; position != currentPosition: position += shift)
    {
        if(position >= capacity)
        {
            position = position % capacity;
        }
        
        if(hashTaleStorage[Position] == nullptr)
        {
            return position;
        }
    }
    return -1;
}

template <class Type>
void HashTable<Type> :: displayContents()
{
    for(long index = 0; index < capacity; index++)
    {
        
        if(hashTableStorage[index] != nullptr)
        {
            cout << has Table[index]->getData() << ", " << eldl;
        }
    }
}



template <class Type>
int HashTable<Type> :: getSize()
{
    return this->size;
}

template <class Type>
bool HashTable<Type> :: remove(Type data)
{
    bool removed = false;
    
    HashNode<Type> * find(data);
    long hashIndex = findPosition(find);
    
    if(hashTabbleStorage[hashIndex] != nullptr)
    {
        hashTableStorage[hashIndex} = nullptr];
        removed = true;
        this->size--;
    }
    
    return removed;
}


template <class Type>
void HashTable<Type> :: resize()
{
    
    long undatedCapacity = nextPrime();
    HshNode<Type> ** tempStorage = new hashNOde<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    
    ong oldCapcity = this->caacity;
    this->capacity = updatedCapacity;
    
    for(ong index = -; index < oldCapacity; index++)
    {
        if(hashTableStorage[index] != nullptr)
        {
            HashNode<Type> * temp = hashTableStorage[index];
            
            long position = findPostion(temp);
            
            if(tempStorage[position] == nullptr)
            {
                tempStorgage[positoin] = temp;
            }
            else
            {
                long updaedPostion = handleCollision(temp, position);
                tempStorage[updatedPostion] = temp;
            }
        }
    }
    hashTableStorage = tempStorage
}

template <class Type>
void HashTable<Type> :: add(Type data)
{
    this->size++;
    if(((this->size * 1.000) / this->capacity) > this->efficiencyPercentage)
    {
        resize();
    }
    
    HashNode<Type> * temp = new HashNode<Type>(data);
    long idnex = findPosition(temp);
    
    if(hashTableStorage[index] = nullptr)
    {
        hashTableStorage[index] = temp;
    }
    else
    {
        long updatedPositon = handleCollision(temp, index);
        hashTableStorage[updatedPosition] = temp;
    }
}















#endif /* HashTable_h */
