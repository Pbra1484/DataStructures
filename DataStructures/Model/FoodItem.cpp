//
//  FoodItem.cpp
//  DataStructures
//
//  Created by Brashear, Patrick on 3/13/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#include "FoodItem.hpp"

FoodItem :: FoodItem()
{
    this->calories = 0;
    this->foodName = "not food";
    this->cost = 0;
    this->delicious = false;
}

FoodItem :: FoodItem(string name)
{
    this->foodName = name;
    this->cost = 0;
    this->calories = 0;
    this->delicious = true;
}

int FoodItem :: getCalories()
{
    return calories;
}

double FoodItem :: getCost()
{
    return cost;
}

string FoodItem :: getFoodName()
{
    return foodName;
}

bool FoodItem :: isDelicious()
{
    return delicious;
}

void FoodItem :: setCalories(int calories)
{
    this->calories = calories;
}

void FoodItem :: setCost(double cost)
{
    this->cost = cost;
}

void FoodItem :: setFoodName(string name)
{
    this->foodName = foodName;
}

void FoodItem :: SetDelicous(bool delicious)
{
    this->delicious = delicious;
}
