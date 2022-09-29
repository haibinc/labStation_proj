//
// Created by swift on 9/19/2022.
//

#include "functions.h"

//creates the array with all stations being empty
void createArray(std::string *ptrArr[], int arraySize[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < arraySize[i]; ++j)
        {
            ptrArr[i][j] = "empty ";
        }
    }
}

void printArray(std::string *ptrArr[], int arraySize[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Lab " << i+1 << "| \t";
        for (int j = 0; j < arraySize[i]; ++j)
        {
            std::cout << " " << j+1 << ":";
            std::cout << ptrArr[i][j];
        }
        std::cout << std::endl;
    }
}

//checks if labNum, or stationNum is out of bounds
void checkArray(int arraySize[], int size, int &labNum, int &stationNum)
{
    while((labNum-1) >= size || (labNum-1) < 0)
    {
        std::cout << "Please enter a valid lab number: " << std::endl;
        std::cin >> labNum;
    }

    for (int i = (labNum-1); i <= (labNum-1); ++i)
    {
        while((stationNum-1) >= arraySize[i] || (stationNum-1) < 0)
        {
            std::cout << "Enter a valid station number: " << std::endl;
            std::cin >> stationNum;
        }
    }
}

void loginArray(std::string *ptrArr[], int arraySize[], int size, int labNum, int stationNum, int idNum)
{
    std::string currentUser;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < arraySize[i]; ++j)
        {
            if(((labNum - 1) == i) && ((stationNum - 1) == j))
            {
                if(ptrArr[i][j] != "empty ")
                {
                    std::cout << "This station is being occupied by " << ptrArr[i][j] << std::endl;
                }
                else
                {
                    ptrArr[i][j] = std::to_string(idNum);
                }
            }
        }
    }
}

void deleteArray(std::string *ptrArr[], int arraySize[], int size, int idNum)
{
    bool userExist = false;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < arraySize[i]; ++j)
        {
            if(ptrArr[i][j] == std::to_string(idNum))
            {
                ptrArr[i][j] = "empty";
                userExist = true;
            }
        }
    }
    if(userExist == false)
    {
        std::cout << "The man ain't here." << std::endl;
    }
}

void searchId(std::string *ptrArr[], int arraySize[], int size, int idNum, int labNum, int stationNum)
{
    bool userExist = false;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < arraySize[i]; ++j)
        {
            if(ptrArr[i][j] == std::to_string(idNum))
            {
                std::cout << "Student ID: " << idNum << " is at lab " << i+1
                << " and station " << j+1 << std::endl;
                userExist = true;
            }
        }
    }
    if(userExist == false)
    {
        std::cout << "None." << std::endl;
    }
}

void menu(std::string *ptrArr[], int arraySize[], int size, int labNum, int stationNum, int idNum)
{
    int choice;
    std::cout << "(1) Login " << std::endl;
    std::cout << "(2) Logout " << std::endl;
    std::cout << "(3) Search " << std::endl;
    std::cout << "Enter: ";
    std::cin >> choice;
    switch(choice)
    {
        case 1:
            std::cout << "Please enter a lab number, station number, and your id number:" << std::endl;
            std::cin >> labNum >> stationNum >> idNum;
            checkArray(arraySize, size, labNum, stationNum);
            loginArray(ptrArr, arraySize, size, labNum, stationNum, idNum);
            printArray(ptrArr, arraySize, size);
            break;
        case 2:
            std::cout << "What is your id number:" << std::endl;
            std::cin >> idNum;
            deleteArray(ptrArr, arraySize, size, idNum);
            printArray(ptrArr, arraySize, size);
            break;
        case 3:
            std::cout << "What is the id number:" << std::endl;
            std::cin >> idNum;
            searchId(ptrArr, arraySize, size, idNum, labNum, stationNum);
            break;
    }
}