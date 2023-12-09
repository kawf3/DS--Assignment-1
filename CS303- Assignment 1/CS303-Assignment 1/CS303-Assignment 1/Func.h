// This header file contains the function prototypes for Func.cpp
#ifndef Func_H
#define Func_H

#include <iostream>
#include <fstream>
#include <array>
using namespace std;


#include <string>

void readingFile(const std::string& filename, int size, int* array);
void replaceValue(int* array);
int find(int* array);
void modifyInteger(int* array, int index);
void addToArray(int* array);
void showMenu();

#endif // DS_1_H
