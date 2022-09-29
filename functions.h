//
// Created by swift on 9/19/2022.
//

#ifndef LABSTATION_FUNCTIONS_H
#define LABSTATION_FUNCTIONS_H
#include <iostream>

void createArray(std::string *ptrArr[], int arraySize[], int size);
void checkArray(int arraySize[], int size, int &labNum, int &stationNum);
void loginArray(std::string *ptrArr[], int arraySize[], int size, int labNum, int stationNum, int idNum);
void deleteArray(std::string *ptrArr[], int arraySize[], int size, int idNum);
void printArray(std::string *ptrArr[], int arraySize[], int size);
void menu(std::string *ptrArr[], int arraySize[], int size, int labNum, int stationNum, int idNum);
void searchId(std::string *ptrArr[], int arraySize[], int size, int idNum, int labNum, int stationNum);
#endif //LABSTATION_FUNCTIONS_H
