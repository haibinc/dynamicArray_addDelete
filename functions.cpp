//
// Created by Haibin Cao on 9/29/22.
//

#include "functions.h"

std::string *addEntry(std::string *dynamicArray, int &size, std::string stringNewEntry)
{
    std::string *temp = new std::string[size+1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = dynamicArray[i];
    }
    temp[size] = stringNewEntry;
    delete []dynamicArray;
    size++;
    return temp;
}

std::string* deleteEntry(std::string *dynamicArray, int &size, std::string entryToDelete)
{
    int counter = 0, length;
    length = size;
    std::string *temp = new std::string[size];
    for (int i = 0; i < size; ++i)
    {
        if(dynamicArray[i] == entryToDelete)
        {
            length--;
            continue;
        }
        else
        {
           temp[counter++] = dynamicArray[i];
        }
    }
    size = length;
    delete []dynamicArray;
    return temp;
}

