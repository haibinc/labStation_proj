//
// Created by swift on 9/19/2022.
//

#include "functions.h"

//creates the array and prints it with all stations being empty
void printArray(std::string *ptrArr[], int arraySize[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Lab " << i+1 << "| \t";
        for (int j = 0; j < arraySize[i]; ++j)
        {
            std::cout << j+1 << ":";
            ptrArr[i][j] = "empty";
            std::cout << ptrArr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

//checks if labNum, or stationNum is out of bounds
void checkArray(int arraySize[], int size, int labNum, int stationNum)
{
    while((labNum-1) >= size || (labNum-1) < 0)
    {
        std::cout << "Please enter a valid lab number: " << std::endl;
        std::cin >> labNum;
    }

    for (int i = (labNum-1); i <= (labNum-1); ++i)
    {
        std::cout << i;
        std::cout << arraySize[i];
        while((stationNum-1) >= arraySize[i] || (stationNum-1) < 0)
        {
            std::cout << "Enter a valid station number: " << std::endl;
            std::cin >> stationNum;
        }
    }
}

void updateArray(std::string *ptrArr[], int arraySize[], int size, int labNum, int stationNum, int idNum)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Lab " << i+1 << "| \t";
        for (int j = 0; j < arraySize[i]; ++j)
        {
            ptrArr[labNum-1][stationNum-1] = "idNum";
            std::cout << ptrArr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}