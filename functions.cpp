//
// Created by Haibin Cao on 9/29/22.
//

#include "functions.h"

std::string *addEntry(std::string *&dynamicArray, int &size, std::string stringNewEntry)
{
    std::string *temp = new std::string[size+1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = dynamicArray[i];
    }
    temp[size] = stringNewEntry;
    delete []dynamicArray;
    dynamicArray = temp;
    size++;
    return dynamicArray;
}

std::string* deleteEntry(std::string *&dynamicArray, int &size, std::string entryToDelete)
{
    std::string *temp = new std::string[size-1];
    for (int i = 0; i < size; ++i)
    {
        if(dynamicArray[i] == entryToDelete)
        {
            for (int j = 0; j < size; ++j)
            {
                if(dynamicArray[j] != entryToDelete)
                {
                    temp[j] = dynamicArray[j];
                }
            }
        }
    }
    delete []dynamicArray;
    dynamicArray = temp;
    size--;
    return dynamicArray;
}

