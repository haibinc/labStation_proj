#include <iostream>
#include "functions.h"

int main()
{
    const int size = 4;
    int labNum, stationNum, idNum;
    std::string *ptrArr[size];
    ptrArr[0] = new std::string[5];
    ptrArr[1] = new std::string[6];
    ptrArr[2] = new std::string[4];
    ptrArr[3] = new std::string[3];
    int arraySize[4] = {5, 6, 4, 3};
    std::cout << "Please enter a lab number, station number, and your id number:" << std::endl;
    std::cin >> labNum >> stationNum >> idNum;
    checkArray(arraySize, size, labNum, stationNum);
    printArray(ptrArr, arraySize, size);

    updateArray(ptrArr, arraySize, size, labNum, stationNum, idNum);


}
