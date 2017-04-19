//
//  FileController.cpp
//  DataStructures
//
//  Created by Brashear, Patrick on 3/27/17.
//  Copyright © 2017 Brashear, Patrick. All rights reserved.
//

#include "FileController.hpp"


BinarySearchTree<CrimeData> FileController :: readCrimeDataToBinarySearchTree(string filename)

{
    
    BinarySearchTree<CrimeData> crimeData;
    
    
    
    string currentCSVLine;
    
    int rowCount = 0;
    
    
    
    ifstream dataFile(filename);
    
    
    
    if(dataFile.is_open())
        
    {
        
        while(!dataFile.eof())
            
        {
            
            getline(dataFile, currentCSVLine, '\r');
            
            
            
            //Exclude first row headers
            
            if (rowCount != 0)
                
            {
                
                CrimeData rowData(currentCSVLine);
                
                crimeData.insert(rowData);
                
            }
            
            rowCount++;
            
        }
        
        dataFile.close();
        
    }
    
    else
        
    {
        
        cerr << "NO FILE" << endl;
        
    }
    
    
    
    
    
    return crimeData;
    
}

AVLTree<CrimeData> FileController :: readCrimeDataToAVLTree(string filename)

{
    
    AVLTree<CrimeData> crimeData;
    
    
    
    string currentCSVLine;
    
    int rowCount = 0;
    
    
    
    ifstream dataFile(filename);
    
    
    
    if(dataFile.is_open())
        
    {
        
        while(!dataFile.eof())
            
        {
            
            getline(dataFile, currentCSVLine, '\r');
            
            
            
            //Exclude first row headers
            
            if (rowCount != 0)
                
            {
                
                CrimeData rowData(currentCSVLine);
                
                crimeData.insert(rowData);
                
            }
            
            rowCount++;
            
        }
        
        dataFile.close();
        
    }
    
    else
        
    {
        
        cerr << "NO FILE" << endl;
        
    }
    
    
    
    return crimeData;
    
}



