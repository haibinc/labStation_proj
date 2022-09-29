#include <iostream>
#include "functions.h"

int main()
{
    const int size = 4;
    int labNum, stationNum, idNum, choice;
    char repeat;
    std::string *ptrArr[size];
    ptrArr[0] = new std::string[5];
    ptrArr[1] = new std::string[6];
    ptrArr[2] = new std::string[4];
    ptrArr[3] = new std::string[3];
    int arraySize[4] = {5, 6, 4, 3};
    std::cout << "CURRENT LAB SPACE" << std::endl << "-----------------------------" << std::endl;
    createArray(ptrArr, arraySize, size);
    printArray(ptrArr, arraySize, size);
    std::cout << std::endl;
    do
    {
        menu(ptrArr, arraySize, size, labNum, stationNum, idNum);
        std::cout << "Do you want to choose again: ";
        std::cin >> repeat;
    }while(repeat == 'y');


}
