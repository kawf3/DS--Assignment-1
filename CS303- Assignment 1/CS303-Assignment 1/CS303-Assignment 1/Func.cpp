// This file contains the implementation of functions declared in DS_1.h
#include <iostream>
#include <fstream>
#include <array>
#include "Func.h"
#include <string>

using namespace std;

void readingFile(const string& filename, int size, int* array) {
  //MODIFY TO USE THE ARRAY THAT IS BEING PASSED INTO THE FUNCTION 
    string inFileName = filename + ".txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            inFile >> array[i];
            cout << array[i] << " ";
        }

        inFile.close(); // CLose input file
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
}

void replaceValue(int* array) {
    int userInput;
    cout << "\nEnter the Integer you would like to add to your bag." << endl;
    cin >> userInput;
}

int find(int* array) {
    int integer = 0;

    cout << "Enter in the unique integer you would like to find in the array" << endl;
    cin >> integer;

    //loops through the array to find the index of a specific integer 
    for (int i = 0; i < 100; i++) {
        if (array[i] == integer) {
            cout << "The integer " << integer << " is present at index " << i << endl;
            return i;
        }
    }

    // If the integer is not found, you may want to return a specific value
    // to indicate that (e.g., -1).
    return -1;
}

void modifyInteger(int* array, int index) {
    int integer = 0;
    if (integer == 0) {
        try {
            cout << "Enter in the unique integer you would like to find in the array" << endl;
            cin >> integer;

            if (isdigit(integer)) {

            }
            else {
                throw std::invalid_argument("please only enter integers - rerun program");
            }

        }
        catch (std::invalid_argument& e) {
            cout << "Caught exception please only enter integers - rerun program";
        }
        catch (...) {
            cout << "Caught exception please rerun program";
        }

    }
    else {
        // take integer index and bring it back to the user 
    }
}



void addToArray(int* array) {
  //ask 
    int userInput;
    //try catch user input make sure its a number
    cout << "\nEnter the Integer you would like to delete all instances of from your bag." << endl;
    cin >> userInput;

    cout << "Deleting all instances of the chosen integer from your bag..." << endl;

}

void showMenu() {
    //r for replace
    //f for find
    //m for modify 
    //a for add

    cout << "\n***Choose an option from the menu!***" << endl;
    cout << "\nR - Replace a value in the array with either 0 or remove the integer altogether" << endl;
    cout << "F - Check if a certain integer exists in the array" << endl;
    cout << "M - Modify the value of an integer in the array" << endl;
    cout << "A - Add a new integer to the end of the array" << endl;
    cout << "X - Finish" << endl;

}
