//
// Created by swift on 9/19/2022.
//

#ifndef LABSTATION_FUNCTIONS_H
#define LABSTATION_FUNCTIONS_H
#include <iostream>

void printArray(std::string *ptrArr[], int arraySize[], int size);
void checkArray(int arraySize[], int size, int labNum, int stationNum);
void updateArray(std::string *ptrArr[], int arraySize[], int size, int labNum, int stationNum, int idNum);
#endif //LABSTATION_FUNCTIONS_H
